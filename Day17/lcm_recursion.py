"""Least Common Multiple (LCM)"""

def get_greatest_common_divisor(num1,num2):
    """
    Function to calculate GCD using the Euclidean algorithm
    """
    if num2 == 0:
        return num1
    return get_greatest_common_divisor(num2,num1%num2)

def get_least_common_multiple(num1,num2):

    """Function to calculate LCM using recursion"""
    return (num1*num2) / get_greatest_common_divisor(num1,num2)

#Let's start here
NUM1 = int(input("Enter the 1st number: "))
NUM2 = int(input("Enter the 2nd number: "))

#Ensure the number are positive
if NUM1<0:
    NUM1 = -NUM1

if NUM2<0:
    NUM2= -NUM2

lcm = get_least_common_multiple(NUM1,NUM2)
print("\nGCD of ",NUM1, " and ", NUM2 ," is :",lcm)
