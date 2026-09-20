def input_temperature(temp_str: str) -> int:
    temp: int = int(temp_str)

if temp > 40:
    raise ValueError(f"{temp}°C is too hot for plants (max 40°C)")
if temp < 0:
    raise ValueError(f"{temp}°C is too cold for plants (min 0°C)")

return temp


def test_temperature() -> None:
    print("=== Garden Temperature Checker ===")
    test_inputs: list[str] = ["25", "abc", "100", "-50"]

    for data in test_inputs:
        print(f"Input data is'{data}'")
        try:
            temp: int = input_temperature(data)
            print(f"Temperature is now {data}°C")
        except Exception as e:
            print(f"Caught input_temperature error: {e}")
    
    print("All tests completed - program didn't crash!")


if __name__ == "__main__":
    test_temperature()