"""Function to check string is palindrome or not"""
def get_is_palindrome(input_str):

    """Initialize the start and end """
    start = 0
    end = len(input_str)-1
    while start < end :
        if input_str[start] != input_str[end] :
            return False
        start = start + 1
        end = end - 1
    return True

user_input = input("Enter a string : ")

if get_is_palindrome(user_input ):
    print(user_input , " is a palindrome string.")
else:
    print(user_input  , " is not a palindrome string.")
