import os
import numpy as np
from scipy.io import wavfile

SAMPLE_RATE = 16000
DURATION_SEC = 1.0
SAMPLES = int(SAMPLE_RATE * DURATION_SEC)
OUTPUT_DIR = "silence"

def generate_color_noise(color, samples):
    """Generates colored noise using frequency domain shaping."""
    white = np.random.normal(0, 1, samples)
    if color == 'white':
        return white

    fft_white = np.fft.rfft(white)
    frequencies = np.fft.rfftfreq(samples)
    frequencies[0] = 1.0  # Prevent divide-by-zero

    if color == 'pink':
        fft_white /= np.sqrt(frequencies)
    elif color == 'brown':
        fft_white /= frequencies
    elif color == 'blue':
        fft_white *= np.sqrt(frequencies)

    return np.fft.irfft(fft_white)

def apply_envelope(signal, env_type):
    """Applies a time-domain envelope to simulate moving or dynamic sounds."""
    t = np.linspace(0, 1, len(signal))
    if env_type == 'const':
        return signal
    elif env_type == 'fadein':
        return signal * t
    elif env_type == 'fadeout':
        return signal * (1.0 - t)
    elif env_type == 'pulse':
        # Simulates a 3Hz pulsing sound (like an alarm or machinery)
        env = 0.5 * (1.0 + np.sin(2 * np.pi * 3 * t))
        return signal * env

def apply_distortion(signal, gain):
    """Simulates microphone clipping and saturation."""
    if gain <= 1.0:
        return signal

    # Amplify the signal beyond the maximum bounds, then hard-clip it.
    # This turns sine waves into square waves, testing model robustness.
    signal = signal * gain
    return np.clip(signal, -1.0, 1.0)

def main():
    os.makedirs(OUTPUT_DIR, exist_ok=True)

    colors = ['white', 'pink', 'brown', 'blue']
    envelopes = ['const', 'fadein', 'fadeout', 'pulse']
    distortions = [1.0, 2.0, 5.0, 10.0, 20.0]  # 1.0 is clean, 20.0 is extreme clipping
    volumes = np.linspace(0.02, 1.0, 50)       # 50 steps from 2% to 100% volume

    total_generated = 0

    print("Generating 4,000 varied background noise files...")
    print("This may take a minute or two depending on your CPU.\n")

    for color in colors:
        for env in envelopes:
            for dist in distortions:
                for vol in volumes:
                    # 1. Generate a fresh noise seed every time
                    noise = generate_color_noise(color, SAMPLES)

                    # 2. Normalize to strict [-1.0, 1.0] bounds
                    noise = noise / np.max(np.abs(noise))

                    # 3. Apply time-domain envelope
                    noise = apply_envelope(noise, env)

                    # 4. Apply microphone distortion/clipping
                    noise = apply_distortion(noise, dist)

                    # 5. Apply final volume scaling and convert to 16-bit PCM
                    audio_data = (noise * 32767.0 * vol).astype(np.int16)

                    # Format: color_envelope_distortionLevel_volume_id.wav
                    filename = f"{color}_{env}_dist{int(dist)}_v{vol:.2f}_{total_generated}.wav"
                    filepath = os.path.join(OUTPUT_DIR, filename)

                    wavfile.write(filepath, SAMPLE_RATE, audio_data)
                    total_generated += 1

                    if total_generated % 400 == 0:
                        print(f"[{total_generated}/4000] files generated...")

    print(f"\nSuccess! Generated exactly {total_generated} highly varied silence/noise files.")

if __name__ == "__main__":
    main()
