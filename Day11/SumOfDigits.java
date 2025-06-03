package Day11;
import java.util.Scanner;
public class SumOfDigits {
    public static int getSumOfDigit(int num){
        int sum=0;
        while(num !=0){
            sum += (num%10);
            num /= 10;
        }
        return sum;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number: ");
        int num = sc.nextInt();
        sc.close();
        int totalSum = getSumOfDigit(num);
        System.out.println("Sum of digits :" + totalSum);
    }
}