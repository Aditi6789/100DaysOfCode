package Day20;
import java.util.Scanner;
public class SwapNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print(("Enter Two number: "));
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        sc.close();

        System.out.println("Before swapping: num1 = " + num1 + ", num2 = " + num2);

        int temp;
        temp = num1;
        num1 = num2;
        num2 = temp;

        System.out.println("After swapping: num1 = " + num1 + ", num2 = " + num2);
    }
}
