import java.util.Scanner;
public class StrongNumber {
    
    public static int factorial(int n){

        int factorial=1;
        while(n != 0){
            factorial *= n;
            n--;
        }
        return factorial;
    }
    public static boolean getIsStrongNumber(int num){

        int temp = num;
        int sum =0;
        while(num != 0){
            int digit = num % 10;
            sum += factorial(digit);
            num /= 10;
        }
        return temp == sum;
    }
    public static void main(String[] args) {
    
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Number: ");
        int num = sc.nextInt();
        sc.close();
        boolean ans = getIsStrongNumber(num);

        if (ans==true) {
            System.out.println(num + "  is a Strong Number.");
        }
        else{
            System.out.println(num + "  is not a Strong Number.");
        }

    }

}
