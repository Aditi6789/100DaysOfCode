//Function to calculate the nth Catalan number
function getCatalan(num){
    //Create an array to store the calculated Catalan number
    let catalanNumbers = new Array(num+1).fill(0)

    // Initialize the base case

    catalanNumbers[0] = 1; //C(0) = 1
    catalanNumbers[1] = 1; // C(1) = 1

    //Calculate Catalan numbers from C(2) to C(n)
    for(let i = 2; i<=num; i++){
        catalanNumbers[i] = 0;
        for(let j = 0; j<i; j++){
            catalanNumbers[i] += catalanNumbers[j]*catalanNumbers[i-j-1];
        }
    }
    //Return the calculate nth Catalan number
    return catalanNumbers[num];
}
num = parseInt(prompt(" Enter the number: "));

//Calculate and print the nth Catalan number
console.log(`Catalan number C(${num}) = ${getCatalan(num)}`);
