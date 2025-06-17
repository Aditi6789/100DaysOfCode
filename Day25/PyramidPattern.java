package Day25;
import java.util.Scanner;
public class PyramidPattern {
    //Function to print Pyramid pattern
    public static void printPyramid(int n){
        for(int i = 0; i<n; i++){

            for(int j = 0; j<n-i-1; j++){      // Print space before asterisks
               System.out.print(" ");
            }
            for(int k = 0; k<2*i+1;k++){        //Print asterisks
               System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of rows: ");
        int row = sc.nextInt();
        sc.close();
        printPyramid(row);
    }
}

