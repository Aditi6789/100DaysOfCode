"""Program for Binary to Decimal conversion"""
def get_binary_to_decimal(binary):

    """Function for Binary to Decimal conversion"""
    decimal = 0
    base = 1

    while binary != 0:
        remainder =  binary % 10   #Extract the last digit
        decimal += (remainder*base) #Multiply with thw current base
        binary //= 10               #Remove the last digit
        base *= 2                  #Update the base(2^i)

    return decimal

#Let's start here
binary_value = int(input("Enter a binary number: "))
decimal_value = get_binary_to_decimal(binary_value)
print("The decimal equivalent is : ",decimal_value)
