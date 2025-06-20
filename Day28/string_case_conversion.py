"""Function for String Conversion """
def string_case_conversion():

    """Get the input string from the user"""
    input_str = input("Enter a String : ")

    print("1. Upper Case to Lower case. ")
    print("2. Lower case to Upper case. ")
    print("3. Toggle case. ")

    choice = int(input("Enter your choice: "))


    if choice == 1:
        print("Lower case String : " , input_str.lower())
    elif choice == 2:
        print("Upper case String : " , input_str.upper())
    elif choice == 3:
        print("Toggled case String : " , input_str.swapcase())
    else:
        print("Invalid choice  ")

string_case_conversion()

