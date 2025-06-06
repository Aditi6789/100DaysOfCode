// function to check if year is a leap year

function isLeapYear(year){
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        return true; // Leap year
    }
    return false; // not a leap year
}

// Get the year from the user
let input_year = parseInt(prompt("Enter a year: "));

//Check if the year is a leap year
if (isLeapYear(input_year)){
    console.log(input_year,"is a leap year.");
}else{
    console.log(input_year,"is not a leap year.");
}
