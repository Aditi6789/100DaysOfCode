import java.util.Scanner;
public class FactorialCalculator {
    public static int getFactorial(int num){
        if( num < 0){
            return -1;
        }
        if( num ==0){
            return 1;
        }
        int fact = 1;
        for(int i=1; i <= num; i++){
            fact *= i;
        }
        return fact;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number : ");
        int num = sc.nextInt();
        sc.close();

        int ans =getFactorial(num);
        if(ans == -1){
            System.out.println("The Factorial of a Negative number is not defined");
        }
        else{
            System.out.println("The Factorial is : " + ans );
        }
    }
}
