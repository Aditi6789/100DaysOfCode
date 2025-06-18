public class SumOfPositiveNumbers {
    //Function to find the sum of positive number in a array.
    public static int getSumOfPositiveNumbers(int arr[]){

        int sum =0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]>0){
                sum += arr[i];
            }
        }
        return sum; 
    }
    public static void main(String[] args) {
        int arr[]={-8,9,4,-3,5,-4,2};
        int result = getSumOfPositiveNumbers(arr);
        System.out.println("Sum of Positive number: " + result);
    }
}
