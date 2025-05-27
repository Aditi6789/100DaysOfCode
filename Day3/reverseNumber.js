function getReverseNumber(num){

    // To handle the negative number 

    if(num < 0){
        num = - num;  // conert to positive 
        let reverseNum = getReverseNumber(num);
        reverseNum = -reverseNum;
        return reverseNum;
    }
    
    // for positive integer number

    let reversedNum = 0;
    while(num != 0 ){
        reversedNum = (reversedNum * 10) + (num % 10);
        num = Math.floor(num/10);
    }
    return reversedNum;
}

let num = parseInt(prompt("Enter the Number:"));
let reversedNum = getReverseNumber(num);
console.log("The reversed number is :",reversedNum);
