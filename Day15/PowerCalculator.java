package Day15;
import java.util.Scanner;

public class PowerCalculator {

    public static double powerCalculator(int base,int exponent){

        double res = 1.0;
        if(exponent >= 0){
            for(int i =1; i<= exponent; i++){
                res *= base;
            }
        }else{
            for(int i =1;i <= (-exponent);i++){
                res /= base;
            }
        }
        return res;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Please enter the base: ");
        int base = sc.nextInt();
        System.out.print("Please enter the exponent: ");
        int exponent = sc.nextInt();
        sc.close();
        System.out.println(exponent + " raised to the power of " + base + " is " + powerCalculator(base,exponent));
    }
}