package Day35;

public class ZigzagMerge {
    public static void getZigzagArray(int[] arr1 , int[] arr2){
        int size = arr1.length + arr2.length;
        int[] new_array = new int[size]; 
        int i =0 , j=0; 
        int k=0;  
        //Merge arrays in zigzag pattern
        while( i < arr1.length  && j < arr2.length){
            new_array[k] = arr1[i];
            k++;
            i++;
            new_array[k] = arr2[j];
            j++;
            k++;
        }
        //Append remaining element, if any
        while(i < arr1.length ){ 
            new_array[k] = arr1[i];
            k++;
            i++;
        }
        while(j < arr2.length ){
            new_array[k] = arr2[j];
            k++;
            j++;
        }
        for(int a = 0 ; a < size; a++){             //print the merge array
            System.out.print(new_array[a] + " ");
        }
    }
    public static void main(String[] args) {
        int[] arr1 = {1,2,3,4,5,6};
        int[] arr2 = {7,8,9,10,11};
        getZigzagArray(arr1, arr2);
    }
}
