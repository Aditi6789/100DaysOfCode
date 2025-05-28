// Program to check number is even or odd number..

function checkOddEven(num){

        // All even number is divisible by 2 
        
        if(num % 2 == 0){    
            console.log(num ,"is a even number")
        }

        else{
            console.log(num ,"is a odd number");
        }
    }
    
let num = parseInt(prompt("Enter the number:"));
checkOddEven(num);
