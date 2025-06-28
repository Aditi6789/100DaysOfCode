//Function to print a 0-1 equilateral triangle pattern
function printTriangle(rows){
    for(let i= 0; i< rows; i++){
        //print spaces
        let row ='';
        for(let j= 0; j<= rows-i-1; j++){
            row += ' '; 
        }


        //Print 0-1 pattern
        for (let k = 0; k <= i; k++){
            row += (i+k)%2 + ' ';
        }
        console.log(row); 
    }
}

input_rows = 5;
printTriangle(input_rows);
