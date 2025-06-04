""" program to check number is perfect number or not"""

def is_perfect_number(num):
    """Function for check if number is perfect number or not"""
    if num <= 1:
        return 0
    total_sum=0
    for i in range(1,(num+2)//2,1):
        if num%i==0:
            total_sum += i
    return total_sum==num

#Let's start here
number = int(input("Enter the number: "))
#Call the function and display result
ans = is_perfect_number(number)
if ans:
    print(number," is a perfect number.")
else:
    print(number," is not a perfect number.")
