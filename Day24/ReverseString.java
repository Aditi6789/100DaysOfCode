import java.util.Scanner;

public class ReverseString {
    public static String getReverseString(String str){
    String reversed ="";
    for (int i = (str.length()-1 ); i >= 0; i--){
        reversed += str.charAt(i);
    }
    return reversed;
}
    public static void main(String[] args) {
        //Let's Start here
        Scanner sc = new Scanner(System.in);
        //Input a string
        System.out.print("Enter the String: ");
        String str = sc.nextLine();
        sc.close();

        //Call the reverse function
        String reversed_str = getReverseString(str);
        System.out.println("Original string : " + str);
        System.out.println("Reversed string : " + reversed_str);
    }
}
