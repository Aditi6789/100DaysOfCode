import java.util.Scanner;

public class FibonacciSeries {

    public static void main(String[] args) {
        int firstTerm = 0 , secondTerm = 1 , nextTerm;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the term of series:  ");
        int num = sc.nextInt();
        sc.close();

        System.out.print(" " + firstTerm + " " +secondTerm + " ");

        for( int i = 2; i<= num ; i++){
            nextTerm = firstTerm + secondTerm;
            System.out.print(nextTerm + " ");
            firstTerm = secondTerm;
            secondTerm = nextTerm;
        }
    }
}







