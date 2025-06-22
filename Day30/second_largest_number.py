"""Function to get the secong largest number from the array"""
def get_second_largest_number(arr):

    """Initialize max and second_max to the smallest possible integer value"""
    max_num = float('-inf')
    second_max = float('-inf')

    for num in arr:
        #Update max and second_max if larger element is found
        if num > max_num :
            second_max = max_num  #Update second_max to the current max
            max_num = num      #Update max to the new element

        #Update second_max if an element is between max and second_max
        if num > second_max and num != max_num:
            second_max = num

    #Check if there is second number
    if second_max == float('-inf'):
        print("There is no second largest numer.")
    else:
        print("The second largest number is : ",second_max)


#Declare an array to store the elements
input_arr = [10,20,30,40,50]

get_second_largest_number(input_arr)
