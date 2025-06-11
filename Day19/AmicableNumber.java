package Day19;
import java.util.Scanner;
public class AmicableNumber {
    //Function to calculate the sum of proper divisor.
    public static int get_sum_of_divisors(int n){
        int sum =0;
        for(int i = 1; i <= (n/2); i++){
            if(n % i == 0){
                sum += i;
            }
        }
        return sum;
    }
    //Function to check if two numbers are amicable 
    public static boolean are_amicable_number(int a , int b){
        return ( get_sum_of_divisors(a) == b ) && (get_sum_of_divisors(b) == a);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("\"Enter two numbers: ");
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        sc.close();

        if(are_amicable_number(num1,num2)){
        System.out.println(num1 + " and " + num2 + " are amicable number.");
        }else{
        System.out.println(num1 + " and " + num2 + " are amicable number.");
        }
    }
}
