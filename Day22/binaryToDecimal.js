//Function for Binary to Decimal conversion
function getBinaryToDecimal(binary){
    decimal = 0, base = 1

    while(binary != 0){
        remainder =  binary % 10;   //Extract the last digit
        decimal += (remainder*base); //Multiply with thw current base
        binary =Math.floor(binary/10); //Remove the last digit
        base *= 2;                  //Update the base(2^i)
    }
    return decimal;
}

//Let's start here
binary = parseInt(prompt("Enter a binary number: "))
decimal = getBinaryToDecimal(binary)
console.log(`The decimal equivalent is : ${decimal}`)
