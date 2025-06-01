function getDigitCount(num){
    let count = 0;
    while(num>0){
        count++;
        num = Math.floor(num/10);
    }
    return count;
}
function getPower(digit,power){
    let prod=1;
    while(power>0){
        prod *=digit;
        power--;
    }
    return prod;
}
function getIsArmStrongNumber(num){
    const temp = num;
    let sum=0;
    const power=getDigitCount(num);
    while(num >0 ){
        let digit = num % 10;
        sum += getPower(digit,power);
        num = Math.floor(num/10);      //to ensure integer division
    }
    if(temp==sum){
       console.log( temp," is a Arm Strong Number");
    }
    else{
        printf(temp," is not a Arm Strong Number.");
    }
}
let number = prompt("enter the Number: ");
getIsArmStrongNumber(number);