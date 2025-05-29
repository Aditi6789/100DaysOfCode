""" Program to check number prime or not"""

def get_check_prime_number(num):

    """Initially consider number is prime"""

    is_prime = True
    if num in (0,1):
        is_prime = False
    else:
        for i in range(2,num,1):
            if num % i == 0:
                is_prime = False
                break
    return is_prime

number = int(input("Enter the Number:"))
ANS = get_check_prime_number(number)
if ANS:
    print(number , "is a prime number")
else:
    print(number , "is not a prime number")
