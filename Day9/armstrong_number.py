""" Program to check number is Arstrong or not."""
#function 1
def get_digit_count(n):
    """ Calculates the number of digits in a given number. """
    count = 0
    temp = n
    while temp>0:
        count += 1
        temp //=  10
    return count

#function 2 to get the power of the digit
def power_of(digit,power):
    """
    Calculates the power of a given digit.
    """
    prod=1 
    while power>0:
        prod *= digit
        power -= 1
    return prod
#function 3 to check the number is ArmStrong or not
def is_armstrong_number(n):
    """Checks if a given number is an Armstrong number.
    """
    temp=n
    total_sum = 0
    power=get_digit_count(num)
    while temp>0:
        digit = temp % 10
        total_sum +=  power_of(digit,power)
        temp //= 10
    return num == total_sum

num = int(input("Enter the number : "))
ans = is_armstrong_number(num)
if ans:
    print(num,"is a Arm Strong Number. ")
else:
    print(num,"is not a Arm Strong Number.")
