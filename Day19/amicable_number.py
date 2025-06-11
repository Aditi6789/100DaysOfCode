""" program to check two numbers are amicable number. """

def get_sum_of_divisors(n):

    """ Function to calculate the sum of proper divisor. """

    total_sum =0
    for i in range(1,n):
        if n%i == 0:
            total_sum = total_sum + i
    return total_sum

def are_amicable_number(a ,b):
    """Function to check if two numbers are amicable """
    return ( get_sum_of_divisors(a) == b ) and (get_sum_of_divisors(b) == a)

num1 = int(input("Enter number 1: "))
num2 = int(input("Enter number 2: "))

if are_amicable_number(num1,num2):
    print(f"{num1} and {num2} are amicable number.")
else:
    print(f"{num1} and {num2} are not amicable number.")

