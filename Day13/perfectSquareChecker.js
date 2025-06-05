// Function to check if a number is a perfect square
function isPerfectSquare(num){
    if(num <0 ){
        return false; // Negative number can not be a perfect square
    }
    let i =0;
    while(i*i <= num){
        if(i*i == num){
            return true;
        }
        i++;
    }
    return false;
}
num = parseInt(prompt("Enter the number:"));

//Store the result in a variable and display it
let ans = isPerfectSquare(num);
if(ans){
    console.log(num +" is a perfect square.");
}
else{
    console.log(num +" is a perfect square.");
}
