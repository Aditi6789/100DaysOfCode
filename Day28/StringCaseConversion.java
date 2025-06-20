package Day28;
import java.util.Scanner;
public class StringCaseConversion {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter a String : ");
    String str = sc.nextLine();

    System.out.println("1. Upper Case to Lower case. ");
    System.out.println("2. Lower case to Upper case. ");
    System.out.println("3. Toggle case. ");

    System.out.println("Enter your choice : ");
    int choice = sc.nextInt();
    sc.close();

    switch(choice){
      case 1:
        System.out.println("Lower case String : " + str.toLowerCase());
        break;
      case 2:
        System.out.println("Upper case String : " + str.toUpperCase());
        break;
      default:
        System.out.println("Invalid choice  ");
    }
  }
}
