""" program to print fibonacci series"""
def print_fibonacci_series(num):

    """ print the fibonacci series up to num term.
    Args:
        num(int): Number of terms"""

    first_term = 0
    second_term = 1
    print(" " + str(first_term) + "  " + str(second_term) , end =' ')
    while num>0:
        next_term = first_term + second_term
        print(" " + str(next_term) , end = ' ')
        first_term = second_term
        second_term = next_term
        num = num-1

terms = int(input("Enter the term of series:"))
print_fibonacci_series(terms)
