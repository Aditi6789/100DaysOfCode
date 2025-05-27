function digitCount(num){

    if(num<0){
            num = -num; // convert to positive if negative
        }
    if(num ==0){
            return 1;
        }
    let count =0;
    while(num>0){
            count = count +1;
            num = Math.floor(num/10);
        }
    return count;
}

// Get the number fromm the user

let num = parseInt(prompt("Enter the Number:"));
const count = digitCount(num);
console.log(`Number of a digit in a ${num}  is: ${count} `);
