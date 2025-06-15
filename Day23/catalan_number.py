"""Function to calculate the nth Catalan number"""
def get_catalan_numbers(num):

    """Create a list to store the calculated Catalan number"""
    catalan_numbers = [0]*(num+1)

    #Initialize the base case
    catalan_numbers[0] = 1
    catalan_numbers[1] = 1

    #Calculate Catalan numbers from C(2) to C(n)
    for i in range(2,num + 1):
        catalan_numbers[i] = 0
        for j in range(0,i):
            catalan_numbers[i] += catalan_numbers[j]*catalan_numbers[i-j-1]

    #Return the calculate nth Catalan number
    return catalan_numbers[num]

number = int(input(" Enter the number: "))

#Calculate and print the nth Catalan number
print("Catalan number C(",number,")= ",get_catalan_numbers(number))
