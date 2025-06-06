""" Program to check if year is a leap year"""

def is_leap_year(year):
    """Function to check if the year is a leap year"""

    if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
        return True # Leap year

    return False # not a leap year

# Get the year from the user
input_year = int(input("Enter a year: "))

#Check if the year is a leap year
if is_leap_year(input_year):
    print(input_year,"is a leap year.")
else:
    print(input_year,"is not a leap year.")
