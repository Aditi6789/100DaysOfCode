// Function for calculate the sum of digits

function get_sum_of_digits(num){
    digit_sum=0;
    while (num !=0){
        digit_sum += (num%10);
        num = Math.floor(num/10);
    }
    return digit_sum
}
//input the number
Num = parseInt(prompt("Enter the number : "))

//call the function and display the result
totalSum = get_sum_of_digits(Num)
console.log("Sum of digits:",totalSum)