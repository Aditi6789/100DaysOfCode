package Day16;
import java.util.Scanner;
public class SumOfNaturalNumber {

    public static int getSum(int num){

        //Recursion method to find sum of first n natural numbers.

        if(num ==1){
            return 1; // Base case
        }
        return num + getSum(num-1);  // Recursion step
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a positive integer: ");
        int num = sc.nextInt();
        sc.close();
        // Call the function and display result
        System.out.println("Sum of first "+ num + " natural number: " + getSum(num));
    }
}

