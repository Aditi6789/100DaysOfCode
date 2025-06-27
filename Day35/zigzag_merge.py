""" Function to merge two array in a zigzag pattern"""
def get_zigzag_array(arr1,arr2):

    """Initilize the new array"""
    new_array = []
    i , j  = 0 ,0

    #Merge arrays in zigzag pattern
    while i < len(arr1)  and j < len(arr2):
        new_array.append(arr1[i])
        i += 1
        new_array.append(arr2[j])
        j += 1

    #Append remaining element, if any
    while i < len(arr1):
        new_array.append(arr1[i])
        i += 1
    while j < len(arr2):
        new_array.append(arr2[j])
        j += 1

    #print the merge array
    print(new_array)

input_arr1 = [1,2,3,4,5,6]
intput_arr2 = [7,8,9,10,11]

get_zigzag_array(input_arr1,intput_arr2)
