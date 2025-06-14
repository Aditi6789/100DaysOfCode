package Day22;
import java.util.Scanner;
public class BinaryToDecimal {
    //Function for Binary to Decimal conversion
    public static long binaryToDecimal(long binary){
        long decimal = 0, base = 1, remainder;
        while(binary != 0){
            remainder =  binary % 10;      //Extract the last digit
            decimal += (remainder*base);     //Multiply with thw current base
            binary /= 10;               //Remove the last digit
            base *= 2;                  //Update the base(2^i)
        }
        return decimal;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a binary number: ");
        long binary = sc.nextInt();
        sc.close();
        long decimal = binaryToDecimal(binary);
        System.out.print("The decimal equivalent is : \n" + decimal);
    }
}

