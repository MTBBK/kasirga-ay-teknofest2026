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

    # Transform to frequency domain
    fft_white = np.fft.rfft(white)
    frequencies = np.fft.rfftfreq(samples)
    frequencies[0] = 1.0  # Prevent divide-by-zero on the DC component

    # Shape the spectrum
    if color == 'pink':
        # Power drops by 3dB per octave (1/f)
        fft_white /= np.sqrt(frequencies)
    elif color == 'brown':
        # Power drops by 6dB per octave (1/f^2)
        fft_white /= frequencies
    elif color == 'blue':
        # Power increases by 3dB per octave (f)
        fft_white *= np.sqrt(frequencies)

    # Transform back to time domain
    return np.fft.irfft(fft_white)

def main():
    os.makedirs(OUTPUT_DIR, exist_ok=True)

    colors = ['white', 'pink', 'brown', 'blue']

    # Volume multiplier sweep from 1% to 100% in 3% increments
    # This will generate 34 files per noise color (136 total files)
    volume_levels = np.arange(0.01, 1.01, 0.03)

    total_generated = 0

    print(f"Generating silence/background noise dataset...")

    for color in colors:
        for vol in volume_levels:
            # Generate raw noise
            noise = generate_color_noise(color, SAMPLES)

            # Normalize to strictly [-1.0, 1.0]
            noise = noise / np.max(np.abs(noise))

            # Scale by current volume level and convert to 16-bit PCM
            audio_data = (noise * 32767.0 * vol).astype(np.int16)

            # Format filename to track parameters (e.g., pink_vol_0.45.wav)
            filename = f"{color}_vol_{vol:.2f}.wav"
            filepath = os.path.join(OUTPUT_DIR, filename)

            wavfile.write(filepath, SAMPLE_RATE, audio_data)
            total_generated += 1

    print(f"Success! Generated {total_generated} varied noise files in the '{OUTPUT_DIR}/' directory.")

if __name__ == "__main__":
    main()
