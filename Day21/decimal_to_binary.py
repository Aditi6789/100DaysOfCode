"""Define a function to convert decimal to binary"""
def decimal_to_binary(decimal):

    """Initialize an empty string to store the binary representation"""
    binary = ""
    while decimal >0:
        binary = str(decimal%2) +binary
        decimal //= 2
    return binary
#Get the decimal number from user
decimal_number = int(input("Enter a decimal number: "))

#print the binary representation
print("Binary representation: ",decimal_to_binary(decimal_number))
