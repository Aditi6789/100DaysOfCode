""" Take numbers from user"""

num1 = int(input("Enter number 1 : "))
num2 = int(input("Enter number 2 : "))

print("Before swapping: num1 = ",num1,",num2 = ", num2)

#Swap numbers using tuple unpacking
num1, num2 = num2, num1

print("After swapping: num1 = ",num1,"num2 = ", num2)
