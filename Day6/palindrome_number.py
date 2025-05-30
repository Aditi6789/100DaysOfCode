""" Program to check number is palindrome number or not."""

def get_check_palindrome(num):

    """ we store the original value in temp variable and then compare with reverse number"""

    temp = num
    reverse = 0

    while num != 0 :
        reverse = (reverse * 10) + (num % 10)
        num //= 10

    return reverse==temp

number = int(input("Enter the Number:"))
ans = get_check_palindrome(number)

if ans:
    print(number , " is a palindrome number")
else:
    print(number , " is not a palindrome number")
