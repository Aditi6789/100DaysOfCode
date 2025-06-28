
"""Function to print a 0-1 equilateral triangle pattern"""

def print_triangle(rows):

    """Loop through each row f the  triangle"""
    for i in range(1,rows+1):
        #print spaces
        print(" " * (rows-i),end="")
        #Print 0-1 pattern
        for k in range(1,i+1):
            print((i+k)%2,end=" ")
        print()

input_rows = int(input("Enter the number of row: "))

print_triangle(input_rows)
