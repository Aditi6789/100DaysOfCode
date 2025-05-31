""" Program for the Strong Number"""

def get_factorial(n):

    """function to calculate factorial """

    prod=1
    while n>0:
        prod *= n
        n = n-1
    return prod

def get_is_strong_number(num):

    """function to check if a number is strong ."""

    if num <0:
        return -1
    if num ==  0:
        return 0

    temp=num
    total_sum = 0
    while temp>0:
        digit = temp % 10
        total_sum +=  get_factorial(digit)
        temp //= 10
    return num == total_sum

number = int(input("Enter the number : "))
ans = get_is_strong_number(number)

if ans == 1:
    print(number,"is a Strong Number. ")
elif ans == 0:
    print(number,"is not a Strong Number.")
else:
    print("strong number are not defined for negative number")
