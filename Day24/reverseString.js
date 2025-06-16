//Arrow Function
function getReverseString(str){
    let reversed ="";
    for(let i = str.length; i>= 0; i--){
        reversed += str.charAt(i);
    }
    return reversed;
}

str =  prompt("Enter the String: ");
console.log(`Original string : ${str}`);
reversed = getReverseString(str);
console.log(`Reversed string : ${reversed}`);
