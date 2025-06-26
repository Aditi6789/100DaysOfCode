"""function to print butterfly pattern"""
def get_butterfly_print(n):
    """upper part of butterfly pattern"""
    for i in range(1,n):
        print("*"*i + " "*(2*(n-i)) + "*"*i)
    #lower part of butterfly pattern
    for i in range(n,0,-1):
        print("*"*i + " "*(2*(n-i)) + "*"*i)

num =  int(input("Enter the number "))

get_butterfly_print(num)
