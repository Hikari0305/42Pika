def input_temperature(temp_str: str) -> int:
    return int(temp_str)


def test_temperature() -> None:
    print("=== Garden Temperature ===")

    data1: str = "25"
    print(f"Input data is {data1}")
    try:
        temp: int = input_temperature(data1)
        print(f"Temperature is now {temp}°C")
    except Exception as e:
        print(f"Caught input_temperature error: {e}")
    
    data2: str = "abc"
    print(f"Input data is {data2}")
    try:
        temp: int = input_temperature(data1)
        print(f"Temperature is now {temp}°C")
    except Exception as e:
        print(f"Caught input_temperature error: {e}")
    
    print("All tests completed - program didn't crash!")


if __name__ == "__main__":
    test_temperature()