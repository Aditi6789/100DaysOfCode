import java.util.Scanner;
public class ButterflyPattern {
    public static void getPrintButterflyPattern(int n){
        //upper part of butterfly pattern
        for(int i  = 1; i< n; i++){
            //print stars
            for(int j = 1; j <= i; j++){
                System.out.print("*");
            }
            //print space
            for(int j = 1; j <= 2*(n-i); j++){
                System.out.print(" ");
            }
            //print stars
            for(int j = 1; j <= i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
        //lower part of butterfly pattern
        for(int i  = n; i >= 1; i--){
            //print stars
            for(int j = 1; j <= i; j++){
                System.out.print("*");
            }
            //print space
            for(int j = 1; j <= 2*(n-i); j++){
                System.out.print(" ");
            }
            //print stars
            for(int j = 1; j <= i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int n = sc.nextInt();
        sc.close();
        getPrintButterflyPattern(n);
    }
}
