"""program to find power of a Number"""

def calculate_power(base,exponent):
    """Define the function to calculate the power of a number"""
    return base**exponent

base_value = float(input("Enter base: "))

exponent_value = float(input("Enter exponent: "))

res = calculate_power(base_value,exponent_value)

print(f"{base_value} raised to the power of {exponent_value} is {res}")
