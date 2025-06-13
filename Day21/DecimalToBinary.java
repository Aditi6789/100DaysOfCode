package Day21;
import java.util.Scanner;
public class DecimalToBinary {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Decimal number: ");
        int decimal = sc.nextInt();
        sc.close();
        String binary = " ";

        while(decimal > 0){
            binary = (decimal % 2) + binary;
            decimal /= 2;
        }

        System.out.println("Binary representation : " + binary);

    }
}
