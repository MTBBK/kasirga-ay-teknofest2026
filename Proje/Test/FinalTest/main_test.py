import os
import sys
import time
import subprocess

# --- CONFIGURATION ---
# Update the "file" names below if you saved them under different names
SCRIPTS = {
    "1": {"name": "Audio Web Dashboard", "file": "app.py"},
    "2": {"name": "Lux Sensor Monitor", "file": "lux_app.py"},
    "3": {"name": "Live Microphone Tester", "file": "model_live_test.py"},
    "4": {"name": "Many WAV File Tester", "file": "run_tests.py"}
}

def print_menu():
    print("\n" + "="*55)
    print(" FPGA TEST MANAGER ")
    print("="*55)
    for key, info in SCRIPTS.items():
        print(f" [{key}] {info['name']} ({info['file']})")
    print(" [0] Exit")
    print("="*55)

def main():
    while True:
        print_menu()
        choice = input("\nSelect a script to run (0-4): ").strip()

        if choice == '0':
            print("\n[SYSTEM] Exiting test manager. Goodbye Osman!")
            break

        elif choice in SCRIPTS:
            target_file = SCRIPTS[choice]["file"]

            # Check if the file actually exists before trying to run it
            if not os.path.exists(target_file):
                print(f"\n[ERROR] Could not find '{target_file}' in the current directory.")
                print("Please check the filename in the SCRIPTS dictionary.")
                continue

            print(f"\n>>> Starting {SCRIPTS[choice]['name']}...")
            print(">>> Press [Ctrl + C] to stop this script and return to the main menu.\n")
            time.sleep(1.5) # Brief pause so the user can read the instruction

            try:
                # sys.executable ensures it uses the active virtual environment (.venv)
                subprocess.run([sys.executable, target_file])
            except KeyboardInterrupt:
                # This catches the Ctrl+C from the user and prevents the menu from crashing
                print(f"\n\n[MANAGER] Successfully stopped {target_file}. Returning to menu...")
                time.sleep(1)
        else:
            print("\n[!] Invalid selection. Please enter a number between 0 and 4.")

if __name__ == "__main__":
    try:
        main()
    except KeyboardInterrupt:
        print("\n\n[SYSTEM] Force quit detected. Goodbye!")
        sys.exit(0)
