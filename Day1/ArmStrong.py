#function 1 to get the number of digit in the number for the power
def get_digit_count(num):
    count = 0
    temp = num
    while temp>0:
        count += 1
        temp //=  10
    return count
#function 2 to get the power of the digit
def power_of(digit,power):  
    prod=1 
    while power>0:
        prod *= digit
        power -= 1
    return prod
#function 3 to check the number is ArmStrong or not
def is_armstrong_number(num):
    temp=num
    total_sum = 0
    power=get_digit_count(num)
    while temp>0:
        digit = temp % 10
        total_sum +=  power_of(digit,power)
        temp //= 10
    return num == total_sum

num = int(input("Enter the number : "))
ans = is_armstrong_number(num)
if ans:
    print(num,"is a Arm Strong Number. ")
else:
    print(num,"is not a Arm Strong Number.")

