//Define a function to convert decimal to binary.
function decimal_to_binary(decimal){
    //Initialize an empty string to store the binary representation.
    let binary = ""
    while (decimal >0){
        binary = (decimal%2) + binary;
        decimal = Math.floor(decimal/2);
    }
    return binary;
}
//Get the decimal number from user
let decimal = parseInt(prompt("Enter a decimal number: "))

//print the binary representation
console.log("Binary representation: ",decimal_to_binary(decimal))
