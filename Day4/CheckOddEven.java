package Day4;
import java.util.Scanner;
public class CheckOddEven {
    public static void checkOddEven(int num){

        if(num % 2== 0){
           System.out.println( num + " is even number.");
        }
        else{
            System.out.println(num + " is odd number");
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number:");
        int num = sc.nextInt();
        sc.close();
        checkOddEven(num);
    }
}
