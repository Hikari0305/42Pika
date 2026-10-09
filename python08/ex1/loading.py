import importlib.metadata
import importlib
import sys


def check_dependencies() -> bool:
    packages: dict[str, str] = {
        "pandas": "Data manipulation",
        "numpy": "Numerical computation",
        "matplotlib": "Visualization",
    }
    missing: list[str] = []

    print("LOADING STATUS: Loading programs...")
    print("Checking dependencies:")

    for package, description in packages.items():
        try:
            version = importlib.metadata.version(package)
            importlib.import_module(package)
            print(f"[OK] {package} ({version}) - {description} ready")
        except (
            ImportError,
            ModuleNotFoundError,
            importlib.metadata.PackageNotFoundError,
        ):
            print(f"[MISSING] {package}")
            missing.append(package)

    if missing:
        print("\nERROR: Missing or unusable dependencies!")
        print("Install with pip: pip install -r requirements.txt")
        print("Install with Poetry: poetry install")
        return False

    compare_versions()
    return True


def compare_versions() -> None:
    packages: list[str] = ["pandas", "numpy", "matplotlib"]

    print("\nInstalled package versions:")
    for package in packages:
        try:
            version = importlib.metadata.version(package)
            print(f"{package}: {version}")
        except importlib.metadata.PackageNotFoundError:
            print(f"{package}: Not installed")

    print("\nDependency management:")
    print("pip: Installs packages from requirements.txt")
    print("Poetry: Manages dependencies with pyproject.toml")
    print("Poetry can also maintain a poetry.lock file.")


def run_analysis() -> None:
    import matplotlib.pyplot as plt
    import numpy as np
    import pandas as pd

    print("\nAnalyzing Matrix data...")
    data = np.random.normal(loc=0, scale=1.0, size=1000)
    df = pd.DataFrame(data, columns=["matrix_signal"])

    print(f"Processing {len(df)} data points...")
    print("Generating visualization...")

    plt.figure(figsize=(8, 4))
    plt.plot(df["matrix_signal"], alpha=0.7)
    plt.title("Matrix Signal Analysis")
    plt.xlabel("Time")
    plt.ylabel("Signal Value")
    plt.grid(True)
    plt.savefig("matrix_analysis.png")
    plt.close()

    print("Analysis complete!")
    print("Results saved to: matrix_analysis.png")


if __name__ == "__main__":
    if check_dependencies():
        run_analysis()
    else:
        sys.exit(1)