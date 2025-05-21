function calculateFactorial(n){
    let factorial =1;
    while (n !=0){
        factorial *= n;
        n--;
    }
    return factorial;
}
function isStrongNumber(num){
    let temp = num ,  sum = 0;
    while( num != 0){
        let digit = num % 10;
        sum += calculateFactorial(digit);
        num = Math.floor(num/10);
    }
    return temp == sum;
}
let num = parseInt(prompt("Enter the Number: "));
let res= isStrongNumber(num);
if (res) {
    console.log(num," is a Strong Number.");
} else {
    console.log(num," is not a Strong number.");
}


