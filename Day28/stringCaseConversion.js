let str = prompt("Enter the String : ");
let choice = parseInt(prompt("Enter your choice : \n 1. Upper Case to Lower case. \n 2. Lower case to Upper case. \n  "));

switch(choice){
    case 1:
        console.log("Lower case String : " , str.toLowerCase());
        break;
    case 2:
        console.log("Upper case String : " , str.toUpperCase());
        break;
    default:
        console.log("Invalid choice  ");
}
