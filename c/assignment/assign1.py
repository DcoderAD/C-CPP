import psutil
import time
import os

def get_process_list():
    """Gets a list of running processes with relevant information."""
    processes = []
    for proc in psutil.process_iter(['pid', 'name', 'status', 'cpu_percent', 'memory_percent']):
        try:  # Handle potential access denied errors
            p = proc.info()
            processes.append(p)
        except (psutil.NoSuchProcess, psutil.AccessDenied, psutil.ZombieProcess):
            pass  # Process might have terminated during iteration

    return processes

def display_process_info(processes):
    """Displays process information in a formatted table."""
    print("-" * 80)
    print("{:<5} {:<30} {:<10} {:<10} {:<10}".format("PID", "Name", "Status", "CPU%", "Mem%"))
    print("-" * 80)

    for p in processes:
        print("{:<5} {:<30} {:<10} {:<10.2f} {:<10.2f}".format(
            p['pid'], p['name'][:29], p['status'], p['cpu_percent'], p['memory_percent']
        ))

    print("-" * 80)


def kill_process(pid):
    """Kills a process given its PID."""
    try:
        proc = psutil.Process(pid)
        proc.kill()
        print(f"Process {pid} killed successfully.")
    except psutil.NoSuchProcess:
        print(f"No process with PID {pid} found.")
    except psutil.AccessDenied:
        print(f"Access denied to kill process {pid}.")
    except Exception as e:
        print(f"An error occurred: {e}")


def main():
    while True:
        os.system('cls' if os.name == 'nt' else 'clear')  # Clear the console
        processes = get_process_list()
        display_process_info(processes)

        try:
            choice = input(
                "Enter PID to kill (or press Enter to refresh): "
            )

            if choice:
                pid_to_kill = int(choice)
                kill_process(pid_to_kill)

        except ValueError:
            print("Invalid input. Please enter a valid PID.")
        except KeyboardInterrupt:
            print("\nExiting...")
            break  # Exit the loop on Ctrl+C

        time.sleep(1)  # Refresh every second (adjust as needed)


if __name__ == "__main__":
    main()