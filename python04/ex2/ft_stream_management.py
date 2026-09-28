import sys


def main() -> None:
    if len(sys.argv) != 2:
        print("Usage: ft_stream_management.py <file>")
        return

    filename: str = sys.argv[1]

    print("=== Cyber Archives Recovery & Preservation ===")
    print(f"Accessing file '{filename}'")

    try:
        f: typing.IO[str] = open(filename, "r")
        lines: list[str] = f.readlines()
        f.close()

        print("---")
        for line in lines:
            print(line, end="")
        print("---")
        print(f"File '{filename}' closed.")

        transformed_lines: list[str] = []
        for line in lines:
            if line.endswith("\n"):
                transformed_lines.append(line[:-1] + "#\n")
            else:
                transformed_lines.append(line + "#\n")

        transformed_content: str = "".join(transformed_lines)

        print("Transform data:")
        print("---")
        print(transformed_content, end="")
        print("---")

        print("Enter new file name (or empty): ", end="")
        sys.stdout.flush()
        input_line: str = sys.stdin.readline()
        new_filename: str = input_line.rstrip("\n")

        if new_filename.strip() == "":
            print("Not saving data.")
        else:
            print(f"Saving data to '{new_filename}'")
            try:
                out_f = open(new_filename, "w")
                out_f.write(transformed_content)
                out_f.close()
                print(f"Data saved in file '{new_filename}'")
            except Exception as e:
                print(
                    f"[STDERR] Error opening file '{new_filename}': {e}",
                    file=sys.stderr,
                )
                print("Data not saved.")
    except Exception as e:
        print(
            f"[STDERR] Error opening file '{filename}': {e}",
            file=sys.stderr,
        )


if __name__ == "__main__":
    main()