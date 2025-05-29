function getCheckPrimeNumber(num){

    let isPrime = true;
    if(num == 0  || num  == 1){
        isPrime = false;
    }else{
        for(let i = 2; i<= Math.floor(num / 2); i++){
            if(num %i == 0){
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}

let num = prompt("Enter the number:");
let ans = getCheckPrimeNumber(num);
if(ans == 0){
    console.log(num , "is not a prime number");
}else{
    console.log(num , " is a prime number");
    }

