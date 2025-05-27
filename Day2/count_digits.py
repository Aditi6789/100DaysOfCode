""" Write a program to count the number of digits in a number"""

def get_digit_count(num):
    """ Count the number of digits in a number. """
    if num <0:
        num = -num  #Convert to positive if negative
    if num == 0:
        return 1

    count =0
    while num >0:
        count = count+1
        num = num//10
    return count

number = int(input("Enter the Number :"))
COUNT = get_digit_count(number)
print("The number of digit in a number is :" ,COUNT)
