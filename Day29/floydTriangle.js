function getPrintFloydTriangle(rows){
    let num = 1;
    for(let i = 1; i<= rows; i++){
        let row = ' '
        for(let j = 1; j <= i; j++){
            row = row + num + ' ';
            num++;
        }
        console.log(row);
    }
}
let rows = parseInt(prompt("Enter the number of rows :  "));

getPrintFloydTriangle(rows);
