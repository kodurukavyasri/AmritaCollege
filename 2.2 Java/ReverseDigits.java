import java.util.Scanner;

public class ReverseDigits {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int n;

        System.out.println("Enter the no : ");
        n = scanner.nextInt();

        reverse(n);

        scanner.close();
    }

    public static void reverse(int n){
        int reversed = 0;
        while(n != 0){
            int digit = n % 10;
            reversed = (reversed * 10) + digit;
            n = n/10;

        }

        System.out.println("The reversed num is : " + reversed);
    }
}
