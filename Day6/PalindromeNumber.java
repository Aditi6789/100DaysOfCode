package Day6;
import java.util.Scanner;
public class PalindromeNumber {
    public static boolean getCheckPalindromeNumber(int num){
        int temp = num , reverse = 0;
        while(num != 0){
        reverse = (reverse*10) + (num%10);
        num /= 10;
        }
        return reverse == temp;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number : ");
        int num = sc.nextInt();
        sc.close();
        boolean res = getCheckPalindromeNumber(num);
        if(res)
            System.out.println(num + " is a Palindrome number.");
        else
            System.out.println(num + " is not a Palindrome number.");
    }
}


