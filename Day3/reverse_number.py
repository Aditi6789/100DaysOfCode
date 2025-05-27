""" Program to reverse the Number """

def get_reverse_number(num):

    """ To handle the Negative number """

    if num < 0:
        num = -num
        reversed_num = get_reverse_number(num)
        reversed_num = -reversed_num
        return reversed_num
    reversed_num = 0

    while num !=0:
        reversed_num = (reversed_num *10) + (num % 10)
        num = num //10
    return reversed_num


original_num = int(input("Enter the number :"))

reversedNum = get_reverse_number(original_num)

print("The Reverse of a number is :",reversedNum)
