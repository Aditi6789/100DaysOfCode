""" write a progrma to find the Factorial of a given number"""
def get_factorial(num):
    """ to calculate the factorial"""
    if num <0:
        return -1
    elif num == 0:
        return 1
    else:
        fact =1
        while num>0:
            fact *= num
            num = num-1
        return fact

number = int(input("Enter the number:"))
res = get_factorial(number)

if res== -1:
    print("The Factorial of a negative number is not defined")
else:
    print("The Factorial is: ",res)
