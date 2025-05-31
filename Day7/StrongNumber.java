import java.util.Scanner;
public class StrongNumber {
    
    // function to check if a number is strong  

    public static int factorial(int n){

        int factorial=1;
        while(n != 0){
            factorial *= n;
            n--;
        }
        return factorial;
    }
    // function to check if a number is strong 

    public static int getIsStrongNumber(int num){

        if(num <0){           
            return -1;
        }
        if(num ==  0){
            return 0;
        }
        int temp = num;
        int sum =0;
        while(num != 0){
            int digit = num % 10;
            sum += factorial(digit);
            num /= 10;
        }
        if(temp == sum){
            return 1;
        }
        return 0;
    }
    public static void main(String[] args) {
    
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Number: ");
        int num = sc.nextInt();
        sc.close();
        int ans = getIsStrongNumber(num);

        if (ans == 1 ) {
            System.out.println(num + "  is a Strong Number.");
        }
        else if (num == 0){
            System.out.println(num + "  is not a Strong Number.");
        }else{
        System.out.println("strong number are not defined for negative number");
        }
    }
}
