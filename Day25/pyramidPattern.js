//Function to print Pyramid pattern
function printPyramid(n){

    for(let i = 0; i<n; i++){
        let row ="";

        // Print space before asterisks
        for(let j = 0; j<n-i-1; j++){
            row += " ";
        }
        //Print asterisks
        for(let k = 0; k<2*i+1;k++){
           row += "*";
        }
        console.log(row);
    }
}
row = parseInt(prompt("Enter the number of rows: "));
printPyramid(row);
