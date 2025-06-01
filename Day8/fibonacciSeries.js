function print_fibonacci_series(num){

    let firstTerm = 0;
    let secondTerm = 1;

    console.log(" " + firstTerm + "\n " + secondTerm);

   for(let i = 3; i<= num; i++){

        next_term = firstTerm + secondTerm
        console.log(" " + next_term , end =' ')
        firstTerm = secondTerm
        secondTerm = next_term

    }
}
let terms = parseInt(prompt("Enter the term of series:")); 
print_fibonacci_series(terms)

