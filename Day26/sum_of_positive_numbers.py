"""Function to find the sum of positive number in a array."""
def get_sum_of_positive_numbers(arr):
    """ initialize total_sum variable with 0"""
    total_sum =0
    for num in arr:
        if num>0:
            total_sum += num

    return total_sum

#Let's Start here
arr1 = [-8,9,4,-3,5,-4,2]
ANS= get_sum_of_positive_numbers(arr1)
print("Sum of Positive number: ",ANS)
