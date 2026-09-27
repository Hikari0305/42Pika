import sys


def main():
    print("=== Command Quest ===")
    print(f"Program name: {sys.argv[0]}")

    total_args = len(sys.argv)

    if total_args == 1:
        print("No arguments provided!")
    else:
        args_count = total_args - 1
        print(f"Arguments received: {args_count}")

        for i in range(1, total_args):
            print(f"Argument {i}: {sys.argv[i]}")
    
    print(f"Total arguments: {total_args}")


if __name__ == "__main__":
    main()