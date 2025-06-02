package Day10;
import java.util.Scanner;

public class GreatestCommonDivisor {
    //Function to calculate GCD using the Euclidean algorithm
    public static int  getGreatestCommonDivisor(int num1,int num2){
        if(num2 == 0){
            return num1;
        }
        return getGreatestCommonDivisor(num2, num1%num2);
    }
    public static void main(String[] args) {
        int num1,num2;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the two integers: ");
        num1 = sc.nextInt();
        num2 = sc.nextInt();
        sc.close();
        //Ensure the number are positive 
        if(num1<0){
            num1 = -num1;
        }
        if(num2<0){
            num2= -num2;
        }
        int gcd = getGreatestCommonDivisor(num1,num2);
        System.out.println("GCD of" + num1 + " and "+ num2 +" is : " + gcd);
    }
}
