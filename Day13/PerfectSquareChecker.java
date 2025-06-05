package Day13;
import java.util.Scanner;

public class PerfectSquareChecker {
    public static boolean getisPerfectNumber(int num){
        if(num <0 ){
            return false; // Negative number can not be a perfect square
        }
        int i =0;
        while(i*i <= num){
        if(i*i == num){
            return true;
        }
        i++;
    }
    return false;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int num = sc.nextInt();
        sc.close();
        boolean ans = getisPerfectNumber(num);
        if(ans)
            System.out.println(num + " is a perfect square");
        else
            System.out.println(num + " is not a perfect square");
    }
}
