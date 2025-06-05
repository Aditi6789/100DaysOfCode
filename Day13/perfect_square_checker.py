
""" Function to check if a number is a perfect square """

def is_perfect_square(num):
    """Negative number can not be a perfect square"""
    if num <0 :
        return False

    i =0
    while i*i <= num:
        if i*i == num:
            return True
        i = i + 1
    return False

number = int(input("Enter the number: "))

#Store the result in a variable and display it

ANS = is_perfect_square(number)

if ANS:
    print(number , " is a perfect square.")

else:
    print(number , " is not a perfect square.")
