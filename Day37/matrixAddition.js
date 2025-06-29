//Function for matrices addition
function getMatricesAddition(matrix1,matrix2){
    
    if (matrix1.length != matrix2.length  ||  matrix1[0].length != matrix2[0].length){
        console.log("Matrices cannot be added");
        return;
    }
    const rows = matrix1.length;
    const cols = matrix1[0].length;
    const result =[];

    for (let i = 0; i < rows; i++){
        const row =[];
        for(let j =0;j<cols;j++){
            row.push(matrix1[i][j] + matrix2[i][j]);
        }
        result.push(row);
    }
    return result;
}
//Let's start
matrix1 = [[1,2,3] , [4,5,6] , [7,8,9] ]
matrix2 = [ [10,20,30] , [40,50,60] , [70,80,90] ]

const result = getMatricesAddition(matrix1,matrix2);
//Displaying the result
console.log(result);
