function getZigzagArray( arr1, arr2){

    let new_array = []; 
    let i =0 , j=0;  

    //Merge arrays in zigzag pattern
    while( i < arr1.length  && j < arr2.length){
        new_array.push(arr1[i++]);
        new_array.push(arr2[j++]);
    }
    //Append remaining element, if any
    while(i < arr1.length ){ 
        new_array.push(arr1[i++]);
    }
    while(j < arr2.length){
        new_array.push(arr2[j++]);
    }
    //print the merge array
    console.log(new_array);
}
arr1 = [1,2,3,4,5,6];
arr2 = [7,8,9,10,11];

getZigzagArray(arr1,arr2);
