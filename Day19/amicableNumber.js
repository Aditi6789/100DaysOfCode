//Function to calculate the sum of proper divisor.

function get_sum_of_divisors(n){
    let sum =0;
    for(let i = 1; i <= (n/2); i++){
        if(n%i == 0){
            sum += i;
        }
    }
    return sum;
}
//Function to check if two numbers are amicable 
function are_amicable_number(a ,b){
    return ( get_sum_of_divisors(a) == b ) && (get_sum_of_divisors(b) == a);
}
num1 = parseInt(prompt("Enter number 1: "));
num2 = parseInt(prompt("Enter number 2: "));

if(are_amicable_number(num1,num2)==1){
    console.log(`${num1}  and ${num2} are amicable number.`);
}else{
    console.log(`${num1}  and ${num2} are not amicable number.`);
}