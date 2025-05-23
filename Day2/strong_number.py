""" Program for the Strong Number"""
def get_factorial(n):
    """
    Calculates the factorial of a digits in a given number.
    """
    prod=1
    while n>0:
        prod *= n
        n = n-1
    return prod

def get_is_strong_number(n):
    """Checks if a given number is an strong number.
    """
    temp=n
    total_sum = 0
    while temp>0:
        digit = temp % 10
        total_sum +=  get_factorial(digit)
        temp //= 10
    return num == total_sum

num = int(input("Enter the number : "))
ans = get_is_strong_number(num)
if ans:
    print(num,"is a Strong Number. ")
else:
    print(num,"is not a Strong Number.")
