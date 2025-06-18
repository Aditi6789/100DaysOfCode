//Function to find the sum of positive number in a array.
function getSumOfPositiveNumbers(arr){

    let sum =0;
    for(let i=0;i<arr.length;i++){
        if(arr[i]>0){
            sum += arr[i];
        }
    }
    return sum; 
}
//Let's Start here
const arr = [-8,9,4,-3,5,-4,2];
let result = getSumOfPositiveNumbers(arr);
console.log(`Sum of Positive number: ${result}`);
