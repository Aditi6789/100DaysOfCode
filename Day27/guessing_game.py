"""Fixed number to guess."""

GAMENUMBER = 25

""" function to check user number with game number"""

def guess_number():

    """ Ask the user for their guess.."""

    user_number = int(input("Guess a number between 1 to 100 : "))

    #Check the guess number
    if user_number == GAMENUMBER:
        print("Congradulation! You guessed the number.")
    elif user_number > GAMENUMBER:
        print("Too high! Try again.")
        guess_number()
    else:
        print("Too low! Try again.")
        guess_number()

guess_number()
