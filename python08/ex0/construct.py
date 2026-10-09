import os
import site
import sys


def check_matrix_status() -> None:
    in_venv: bool = sys.prefix != sys.base_prefix

    if in_venv:
        venv_name: str = os.path.basename(sys.prefix)
        site_packages: str = (
            site.getsitepackages()[0]
            if hasattr(site, "getsitepackages")
            else "Unknown"
        )

        print("MATRIX STATUS: Welcome to the construct")
        print(f"Current Python: {sys.executable}")
        print(f"Virtual Environment: {venv_name}")
        print(f"Environment Path: {sys.prefix}")
        print("SUCCESS: You're in an isolated environment!")
        print("Safe to install packages without affecting")
        print("the global system.")
        print(f"\nPackage installation path:\n{site_packages}")
    else:
        print("MATRIX STATUS: You're still plugged in")
        print(f"Current Python: {sys.executable}")
        print("Virtual Environment: None detected")
        print("WARNING: You're in the global environment!")
        print("The machines can see everything you install.\n")
        print("To enter the construct, run:")
        print("python -m venv matrix_env")
        print("source matrix_env/bin/activate # On Unix")
        print(r"matrix_env\Scripts\activate  # On Windows")
        print("\nThen run this program again.")


if __name__ == "__main__":
    check_matrix_status()