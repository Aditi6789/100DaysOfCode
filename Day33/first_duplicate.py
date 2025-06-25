"""Function to find the First duplicate in a array"""
def find_duplicate(arr):

    """Create an empty set to store unique elements"""
    seen = set()
    for num in arr:
        #check if the element is alredy in the set
        if num in seen:
            #If it is, return the element as the first duplicate
            return num
        #If not, add the element to the set
        seen.add(num)
    return None

input_arr= [2,1,3,5,3,2]
print(find_duplicate(input_arr))
