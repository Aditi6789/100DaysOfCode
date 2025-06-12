num1 = parseInt(prompt("Enter number 1 : "));
num2 = parseInt(prompt("Enter number 2 : "));

console.log(`Before swapping: num1 = ${num1} , num2 = ${num2}`);

let temp;

temp = num1;
num1 = num2;
num2 = temp;

console.log(`After swapping: num1 = ${num1} , num2 = ${num2}`);
