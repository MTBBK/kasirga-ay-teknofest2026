import time
import serial
from flask import Flask, jsonify, render_template

app = Flask(__name__)

MAIN_UART_PORT = '/dev/ttyUSB1'
BAUD_RATE = 921600

print("[SYSTEM] Initializing Lux Sensor Serial Port...")
try:
    main_serial = serial.Serial(MAIN_UART_PORT, BAUD_RATE, timeout=0.5)
except Exception as e:
    print(f"[FATAL ERROR] Could not open serial port: {e}")

# --- ROUTES ---
@app.route('/')
def index():
    # Make sure your HTML file is inside a folder named "templates"
    return render_template('lux_index.html')

@app.route('/api/lux', methods=['GET'])
def get_lux():
    """Reads the live Lux sensor stream."""
    try:
        # Flush the buffer to ensure zero latency
        main_serial.reset_input_buffer()

        start_time = time.time()

        # Only try reading for 0.5 seconds to prevent hanging
        while time.time() - start_time < 0.5:
            if main_serial.in_waiting > 0:
                line = main_serial.readline().decode('utf-8', errors='ignore').strip()

                # Look for "Lux" and extract the number after the colon
                if "Lux" in line and ":" in line:
                    try:
                        lux_val = line.split(":")[-1].strip()
                        return jsonify({"lux": lux_val})
                    except IndexError:
                        pass

        return jsonify({"error": "No lux data found. Is switch V15 ON?"}), 404

    except Exception as e:
        return jsonify({"error": str(e)}), 500

if __name__ == '__main__':
    app.run(host='127.0.0.1', port=5001, debug=False)
