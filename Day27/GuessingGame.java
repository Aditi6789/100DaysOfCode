package Day27;
import java.util.Scanner;
public class GuessingGame {

    static int gameNumber = 25;        //Fixed number to guess
    static Scanner sc = new Scanner(System.in);  //Create a global Scanner object to read user input
    static int attempts=0;

    public static void main(String[] args) {
        guessNumber();
        sc.close();
    }
    public static void guessNumber(){

        System.out.println("Guess a number between 1 to 100 :");   //Ask the user for their guess
        int userNumber = sc.nextInt();
        attempts++;

        //Check the guess number
        if( userNumber == gameNumber){
            System.out.println("Congradulation! You guessed the number.");
        }
        else if(userNumber > gameNumber){
            System.out.println("Too high! Try again.");
            guessNumber();
        }else{
            System.out.println("Too low! Try again.");
            guessNumber();
        }
    }
}
