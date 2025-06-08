//Recursion method to find sum of first n natural numbers.

function get_sum(num){

    if (num ==1){
        return 1; // Base case
    }
    return num + get_sum(num-1);   // Recursion step

}
n =parseInt(prompt("Enter a positive integer: "));

// Call the function and display result

console.log(`Sum of first ${n} natural number: ${get_sum(n)}`)
