package Day36;
import java.util.Scanner;
public class ZeroOneTriangle {
    
    public static void printTriangle(int rows){
        for(int i= 1; i<= rows; i++){
            //print spaces
            for(int j= 1; j<= rows-i; j++){
                System.out.print(" ");
            }
            //Print 0-1 pattern
            for (int k = 2; k <= i*2; k++){
                System.out.print((i+k)%2);
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int rows = sc.nextInt();
        sc.close();
        printTriangle(rows);
    }
}
