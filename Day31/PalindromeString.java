package Day31;
import java.util.Scanner;
public class PalindromeString {
    public static boolean getIsPalindrome(String str){
        int start = 0;
        int end = str.length()-1;

        while(start < end ){
            if(str.charAt(start) != str.charAt(end)){
            return false;
        }
        start++;
        end--;
    }
    return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a String: ");
        String str = sc.nextLine();
        sc.close();
        if(getIsPalindrome(str)){
            System.out.println(str + " is a Palindrome string");
        }else{
            System.out.println(str + " is not a Palindrome string");
        }
    }
}
