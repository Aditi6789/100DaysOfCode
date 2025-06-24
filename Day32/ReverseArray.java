package Day32;

public class ReverseArray {
    public static void getReverseArray(int arr[]){
        //Initialize two pointer, one at the start and one at end of the array
        int start = 0;
        int end = arr.length - 1;

        //Swap elements from the start ans end,moving towords the center
        while( start < end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
    public static void main(String[] args) {
        int[] arr = { 1,2,3,4,5};
        getReverseArray(arr);
        for(int i =0; i<arr.length; i++){
            System.out.print(arr[i] + " ");
        }
    }
}
