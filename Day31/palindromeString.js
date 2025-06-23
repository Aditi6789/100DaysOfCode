function getIsPalindrome(str){

    let start = 0;
    let end = str.length-1;

    while(start < end ){
        if(str[start] !== str[end]){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
let str = prompt("Enter a string : ");

if(getIsPalindrome(str)){
    console.log(`${str} is a palindrome.`);
}else{
    console.log(`${str} is not a palindrome.`);
}
