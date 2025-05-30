function getPalindrome(num){
    let temp = num;
    let reverse = 0;

    while (num != 0){
        reverse = (reverse * 10) + (num % 10);
        num = Math.floor(num / 10);  // use Math.floor() for integer division
    }
    return reverse==temp;
}
number = parseInt(prompt("Enter the Number:"));  // convert input to integer

let ans = getPalindrome(number);

if (ans)
    console.log(number + " is a palindrome number");
else
    console.log(number +  " is not  palindrome number");
