function getSecondLargestNumber(arr,size){

    if(arr.length <2 ){
        console.log("Array should have at least 2 elements.");
    }
    //Initialize max and second_max to the smallest possible integer value
    let max = -Infinity;
    let second_max= -Infinity;

    for( let num of arr){
        //Update max and second_max if larger element is found
        if(num > max){
            second_max = max;  //Update second_max to the current max
            max = num;      //Update max to the new element
        }
        //Update second_max if an element is between max and second_max
        if (num > second_max && num != max){
            second_max = num;  
        } 
    }
    //Check if there is second number 
    if(second_max == -Infinity){
        console.log("There is no second largest numer.\n");
    }else{
        console.log("The second largest number is : %d \n",second_max);
    }
}
let arr =[10,20,30,40,50];
getSecondLargestNumber(arr);
