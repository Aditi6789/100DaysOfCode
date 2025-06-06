package Day14;
import java.util.Scanner;

public class LeapYear {
    public static boolean isLeapYear(int year){
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 ==0 )){

            return true;
        }
        return false;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a year");
        int year = sc.nextInt();
        sc.close();
        boolean ans =isLeapYear(year);
        if(ans)
             System.out.println(year + " is a leap year.");
        else
            System.out.println(year + " is not a leap year.");
    }
}
