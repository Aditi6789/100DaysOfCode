import java.util.Scanner;

public class PrimeNumber {
    public static boolean checkPrime(int num){
        boolean isPrime = true;
        if(num == 0 || num == 1){
            isPrime = false;
        }else{
            for(int i =2; i < Math.floor(num/2); i++){
                if(num % i == 0){
                    isPrime = false;
                    break;
                }
            }
        }
        return isPrime;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number : ");
        int num = sc.nextInt();
        sc.close();
        boolean res = checkPrime(num);
        if(res == true){
            System.out.println(num + " is a prime number");
        }else{
            System.out.println(num + " is not prime number");
        }
    }
}
