function get_butterfly_print(n){
    //upper part of butterfly pattern
    for(let i  = 1; i< n; i++){
        let row ='';
        //print stars
        for(let j = 1; j <= i; j++){
            row +='*';
        }
        //print space
        for(let j = 1; j <= 2*(n-i); j++){
            row +=' ';
        }
        //print stars
        for(let j = 1; j <= i; j++){
            row +='*';
        }
        console.log(row);
    }
    //lower part of butterfly pattern
    for(let i  = n; i >= 1; i--){
        let row ='';
        //print stars
        for(let j = 1; j <= i; j++){
            row +='*';
        }
        //print space
        for(let j = 1; j <= 2*(n-i); j++){
            row +=' ';
        }
        //print stars
        for(let j = 1; j <= i; j++){
            row +='*';
        }
        console.log(row);
    }

}
let n = prompt("Enter the number: ");
get_butterfly_print(n);
