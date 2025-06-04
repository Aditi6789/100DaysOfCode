import java.util.Scanner;
public class PerfectNumber {
    // Function for check if number is perfect number or not
    public static boolean isPerfectNumber(int num){
        if(num <= 1){
            return false;
        }
        int sum =0;
        for(int i =1; i<=(num/2); i++){
            if(num%i==0){
                sum += i;
            }
        }
        return sum==num;
    }
    //Let's start here
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter the Number: ");
        int num = sc.nextInt();
        sc.close();
        // Call the function and display result
        boolean ans =isPerfectNumber(num);
        if (ans){
            System.out.println(num + " is perfect number");
        }
        else{
            System.out.println(num + " is not a perfect number");
        }
    }
}