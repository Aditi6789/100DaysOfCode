package Day29;
import java.util.Scanner;
public class FloydTriangle {
    public static void getPrintFloydTriangle(int rows){
        int num = 1;
        //Outer loop to iterate over the rows
        for(int i = 1; i<= rows; i++){
            //inner loop to print number in each rows
            for(int j = 1; j <= i; j++){
                //print the current number and increment it.
                System.out.print(num + " ");
                num++;
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows :  ");
        int rows = sc.nextInt();
        sc.close();
        getPrintFloydTriangle(rows);
    }
}
