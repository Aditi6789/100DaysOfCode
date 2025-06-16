"""Program to reverse a string"""

def get_reverse_string(string):
    """Function to reverse a string"""
    reversed_string =""
    for i in range(len(string)-1,-1,-1):
        reversed_string += string[i]
    return reversed_string


input_str =  input("Enter the String: ")

reversed_str = get_reverse_string(input_str)

print("Original string : " + input_str)
print("Reversed string : " + reversed_str)
