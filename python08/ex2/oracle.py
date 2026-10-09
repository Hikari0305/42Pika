import os

from dotenv import load_dotenv


def main() -> None:
    """Load and check Matrix configuration."""
    load_dotenv()

    mode: str = os.getenv("MATRIX_MODE", "development")
    db_url: str = os.getenv("DATABASE_URL", "")
    api_key: str = os.getenv("API_KEY", "")
    log_level: str = os.getenv("LOG_LEVEL", "INFO")
    zion_ep: str = os.getenv("ZION_ENDPOINT", "")

    print("ORACLE STATUS: Reading the Matrix...")
    print("Configuration loaded:")

    print(f" Mode: {mode}")

    if db_url:
        print(" Database: Configured")
    else:
        print(" Database: Missing")

    if api_key and api_key != "your_api_key_here":
        print(" API Access: Configured")
    else:
        print(" API Access: Missing or placeholder")

    print(f" Log Level: {log_level}")

    if zion_ep:
        print(" Zion Network: Configured")
    else:
        print(" Zion Network: Missing")

    print("\nEnvironment security check:")

    if mode == "production":
        print("[INFO] Running in Production mode")
    elif mode == "development":
        print("[INFO] Running in Development mode")
    else:
        print("[WARNING] Invalid MATRIX_MODE")

    if not api_key or api_key == "your_api_key_here":
        print("[WARNING] API_KEY is missing or uses a placeholder")
    else:
        print("[OK] API_KEY is configured")

    if os.path.isfile(".env"):
        print("[OK] .env file found")
    else:
        print("[WARNING] .env file not found")

    print("\nConfiguration checks:")

    if mode not in ("development", "production"):
        print("[WARNING] MATRIX_MODE must be development or production")
    else:
        print("[OK] MATRIX_MODE is valid")

    if not db_url:
        print("[WARNING] DATABASE_URL is missing")
    else:
        print("[OK] DATABASE_URL is configured")

    if not zion_ep:
        print("[WARNING] ZION_ENDPOINT is missing")
    else:
        print("[OK] ZION_ENDPOINT is configured")

    if mode == "production":
        print("[INFO] Production configuration selected")
    else:
        print("[INFO] Development configuration selected")

    print("\nThe Oracle sees all configurations.")


if __name__ == "__main__":
    main()