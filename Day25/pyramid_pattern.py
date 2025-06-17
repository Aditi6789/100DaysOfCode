"""Program for centered pyramid pattern"""
def print_pyramid(n):
    """ Function to print Pyramid pattern"""
    for i in range(n):

        # Print space before asterisks
        for _ in range(n-1-i):
            print(" ",end='')

        # Print asterisks
        for _ in range(2*i+1):
            print("*",end='')

        print()

row = int(input("Enter the number of rows : "))

print_pyramid(row)
