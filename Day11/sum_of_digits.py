"""Function for calculate the sum of digits"""
def get_sum_of_digits(num):

    """initially the sum is 0"""
    digit_sum=0
    while num !=0:
        digit_sum += (num%10)
        num //= 10
    return digit_sum

#input the number
Num = int(input("Enter the number : "))

#call the function and display the result
totalSum = get_sum_of_digits(Num)
print("Sum of digits:",totalSum)