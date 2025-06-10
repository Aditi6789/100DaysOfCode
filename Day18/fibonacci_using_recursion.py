"""Recursion method to calculate Fibonacci numbers """
def get_fibonacci(num):

    """Base cases: Fibonacci(0) = 0,Fibonacci(1) = 1"""
    if num <= 1:
        return num

    return get_fibonacci(num-1) + get_fibonacci(num-2)


#Let's start
NUM= int(input("Enter the Number of term in Fibonacci series:  "))

# Number of term in the Fibonacci series
print("Fibonacci series up to ",NUM, "terms: ")

for i in range(0,NUM,1):
    print(get_fibonacci(i) , end=" ")
