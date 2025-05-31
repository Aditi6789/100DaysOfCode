// function to calculate factorial 

function calculateFactorial(n){
    let fact =1;
    while (n > 0){
        fact *= n;
        n--;
    }
    return fact;
}
// function to check if a number is strong 

function isStrongNumber(num){

    if(num <0){      
        console.log("Strong number are not defined for negative number");
        return false;
    }
    if(num ==  0){
        return false;
    }
    let temp = num ,  sum = 0;
    while( num > 0){
        sum += calculateFactorial(num % 10);
        num = Math.floor(num/10);
    }
    return temp == sum;
}
let num = parseInt(prompt("Enter the Number: "));
let res= isStrongNumber(num);
if (res)
    console.log(num + " is a Strong Number.");
else
    console.log(num + " is a not Strong Number.");
