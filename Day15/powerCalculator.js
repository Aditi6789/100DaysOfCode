function calculatePower(base,exponent){ 

    let res = 1.0;
    if(exponent >= 0){
        for(let i =1; i<= exponent; i++){
            res *= base;
        }
    }else{
        for(let i =1;i <= (-exponent);i++){
            res /= base;
       }
    }
    return res;
}
let base =parseInt(prompt("Enter the Base: "));

let exponent = parseInt(prompt("Enter the exponent: "));

console.log(`${exponent} raised to the power of ${base}: ${calculatePower(base,exponent)}`);
