import java.util.Scanner;
class ArmStrongNumber {

    public static int getDigitCount(int num){

        int count = 0;
        while(num > 0){
         count = count +1;
         num = num / 10;
        }
        return count;
    }
    public static int powerOf(int digit ,int power){

       int prod = 1;
       while(power>0){
         prod = prod * digit;
         power--;
       }
       return prod;
    }  
    public static boolean getIsArmStrongNumber(int num){
        int temp = num;
        int sum= 0;
        int power = getDigitCount(num);
        while(num != 0){
            int  digit = num %10;
            sum = sum + powerOf(digit,power);
            num = num / 10;
        }
        return temp == sum;

    }
    public static void main(String args[]){       

        Scanner s1 = new Scanner(System.in);
        System.out.println(" Enter the Number : ");
        int num =s1.nextInt();
        s1.close();
        boolean res = getIsArmStrongNumber(num);
        if (res == true){
            System.out.println(num + " is a ArmStrong Number ");
        }else{
            System.out.println(num + " is not a ArmStrong Number");
        }   
    }  
}




