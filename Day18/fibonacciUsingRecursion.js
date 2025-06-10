// Recursion method to calculate Fibonacci numbers 
function getfibonacci(num){

    if (num <= 1){
        return num;  //Base cases: Fibonacci(0) = 0,Fibonacci(1) = 1"""
    }
    return getfibonacci(num-1) + getfibonacci(num-2)

}
//Let's start
num= parseInt(prompt("Enter the Number of term in Fibonacci series:  "));

//Number of term in the Fibonacci series
console.log("Fibonacci series up to "+ num + " terms: ")

for(let i = 0; i<num; i++){
    console.log(" ",getfibonacci(i));
}