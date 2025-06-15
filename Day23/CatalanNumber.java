package Day23;
import java.util.Scanner;

public class CatalanNumber {

    public static long getCatalanNumber(int num){
        long[] catalanNumbers = new long[num+1];

        catalanNumbers[0] = 1;    // Initialize the base case
        catalanNumbers[1] = 1;
        

        //Calculate Catalan numbers from C(2) to C(n)
        for(int i = 2; i<=num; i++){
            catalanNumbers[i] = 0;
            for(int j = 0; j<i; j++){
                catalanNumbers[i] += catalanNumbers[j]*catalanNumbers[i-j-1];
            }
        }
        return catalanNumbers[num];
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print(" Enter the number: ");
        int num = sc.nextInt();
        sc.close();
        System.out.println("Catalan number C(" + num + ")= " + getCatalanNumber(num));
    }
}
