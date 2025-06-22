package Day30;
public class SecondLargestNumber {
    public static void getSecondLargestNumber(int arr[]){

        //Initialize max and second_max to the smallest possible integer value
        int max = Integer.MIN_VALUE;
        int second_max= Integer.MIN_VALUE;
        for( int num : arr){
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
        if(second_max == Integer.MIN_VALUE){
            System.out.println("There is no second largest numer.");
        }else{
            System.out.println("The second largest number is : " + second_max);
        }
    }
    public static void main(String[] args) {
       int arr[] = {10,20,30,40,50};
       getSecondLargestNumber(arr);
    }
}
