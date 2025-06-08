"""Recursion method to find sum of first n natural numbers."""

def get_sum(num):

    """ Base case """
    if num ==1:
        return 1
    return num + get_sum(num-1)   # Recursion step

n =int(input("Enter a positive integer: "))

# Call the function and display result

print("Sum of first ",n," natural number: ",get_sum(n))
