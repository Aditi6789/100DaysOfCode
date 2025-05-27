package Day3;
import java.util.Scanner;

public class ReverseNumber {
    public static int getReversedNumber(int num){
        // To handle the negative number 
        if(num < 0){
            num = - num;
            int reversedNum = getReversedNumber(num);
            reversedNum = -reversedNum;
            return reversedNum;
        }
        // for positive number
        int reversedNum = 0;
        while(num != 0 ){
            reversedNum = (reversedNum* 10) + (num % 10);
            num = num / 10;
        }
        return reversedNum;        
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Number: ");
        int num = sc.nextInt();
        sc.close();
        int reversedNum =  getReversedNumber(num);
        System.out.println("Enter the Number :" + reversedNum);
    }
}

