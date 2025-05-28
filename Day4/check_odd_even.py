"""Program to check number is even or odd number.."""

def check_odd_even(num):

    """ All even number is divisible by 2"""

    if num % 2 == 0:
        print(f"{num} is a even number")
    else:
        print(f"{num} is a odd number")



number = int(input("Enter the number : "))
check_odd_even(number)
