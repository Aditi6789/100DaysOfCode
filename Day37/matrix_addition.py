""" Function to add the matrices"""
def add_matrices(matrix1,matrix2):
    """Check if matrices can be added"""
    if len(matrix1) != len(matrix2)  or len(matrix1[0]) != len(matrix2[0]):
        raise ValueError("Matrices cannot be added")
    result = []
    for i in range(0,len(matrix1),1):
        row = []
        for j in range(0,len(matrix1[0]),1):
            row.append(matrix1[i][j] + matrix2[i][j])
        result.append(row)
    return result
def print_matrix(matrix):
    """Function to print the matrix"""
    for row in matrix:
        print(row)

matrix_1 = [ [1,2,3] , [4,5,6] , [7,8,9] ]
matrix_2 = [ [10,20,30] , [40,50,60] , [70,80,90] ]

result_matrix = add_matrices(matrix_1,matrix_2)
print("Matrix 1: ")
print_matrix(matrix_1)
print("Matrix 2: ")
print_matrix(matrix_2)
print("Resultant Matrix : ")
print_matrix(result_matrix)
