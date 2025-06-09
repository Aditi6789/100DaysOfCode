// Least Common Multiple (LCM)

function getGreatestCommonDivisor(num1,num2){

    // Function to calculate GCD using the Euclidean algorithm

    if (num2 == 0){
        return num1
    }
    return getGreatestCommonDivisor(num2,num1%num2)
}
function getLeastCommonMultiple(num1,num2){
    return (num1*num2) / getGreatestCommonDivisor(num1,num2);
}
// #Let's start here
num1 = parseInt(prompt("Enter the 1st number: "))
num2 = parseInt(prompt("Enter the 2nd number: "))

// #Ensure the number are positive
if (num1<0){
   num1 = -num1
}
if (num2 <0){
    num2 = -num2 
}
lcm = getLeastCommonMultiple(num1,num2);
console.log(`LCM of ${num1} and ${num2} is : ${lcm}`);


