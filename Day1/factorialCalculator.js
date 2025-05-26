function getFactorial(num){
    if(num<0){
        return -1;
    }
    if(num ==0){
        return 1;
    }
    else{
        let fact =1;
        for(let i=1; i<= num; i++){
            fact = fact*i;
        }
        return fact;
    }
}

let num = parseInt(prompt("Enter the number:"));

let ans =getFactorial(num);
if(ans == -1){
        console.log("The Factorial of a Negative number is not defined");
    }
else{
    console.log("The Factorial is : " + ans );
    }
