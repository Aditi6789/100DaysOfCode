""" Write program to find the number is a Strong number or not by using python library """
import math

def get_is_strong_number(num):
    """
    str(number)--the input number is converted to a string to allow iteration over its digits.
    for digit in str(number)--this loop iterate over each character(digit) in the string repersentation of the number.
    int(digit)-- each character(digit) is converted back to an integer to perform mathematical operation.
    math.factorial(int(digit))--Factorial of each digit is calculated using math.factorial function from python's math library.
    """
    return num == sum(math.factorial(int(digit)) for digit in str(num))

number = int(input("Enter the number: "))
result=get_is_strong_number(number)
if result:
    print(number,"is a Strong Number.")
else:
    print(number,"is not a Strong Number.")
