//Function to find the First duplicate in a array
function getFirstDuplicate(arr){

    //Iterate over each element in the array
    for(let i = 0; i<arr.length; i++){

        //Compare the urrent element with every other element that comes after it
        for(let j = i+1; j<arr.length; j++){

            //Check if the elements are equal
            if(arr[i] == arr[j]){
                //If it is, return the element as the first duplicate
                return arr[i];
            }
        }
    }
    return null; // Return -1 if no duplicate are found 
}
let arr = [2,1,3,5,3,2];
console.log("First duplicate : " , getFirstDuplicate(arr));
