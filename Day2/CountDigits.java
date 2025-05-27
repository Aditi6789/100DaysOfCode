import java.util.Scanner;

public class CountDigits {
    
    public static int DigitsCount(int num){

        if(num<0){
            num = -num; // convert to positive if negative
        }
        if(num ==0){
            return 1;
        }
        int count =0;
        while(num>0){
            count = count +1;
            num = num/10;
        }
        return count;
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number: ");
        int num = sc.nextInt();
        sc.close();
        int count = DigitsCount(num);
        System.out.println("Number of digit in a number is :" + count);    
    }
}
