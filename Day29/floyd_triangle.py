"""Function to print Floyd triangle pattern"""
def get_print_floyd_triangle(rows):
    """Initialize a variable to keep track of the current number."""
    num = 1
    #Outer loop to iterate over the rows
    for i in range(rows):
        #inner loop to print number in each rows
        for _ in range(i+1):
            #print the current number and increment it.
            print(num , end= " ")
            num +=  1
        print()

input_row = int(input("Enter the number of rows :  " ))
get_print_floyd_triangle(input_row)
