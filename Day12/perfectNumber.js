 // Function for check if number is perfect number or not
function isPerfectNumber(num){
    if(num <= 1){
        return 0;
    }
    let sum =0;
    for(let i =1; i<=(num/2); i++){
        if(num%i==0){
            sum += i;
        }
    }
    return sum==num;
}
//Let's start here
let num =parseInt(prompt("Enter the number:"))

//Call the function and display result
let ans = isPerfectNumber(num);

if(ans)
    console.log(num + " is a perfect number");
else
    console.log(num + "is not a perfect number");
