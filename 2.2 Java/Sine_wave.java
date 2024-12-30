// 1/1!+2/2!...
import java.util.Scanner;

public class Sine_wave {
    public static int factorial(int n){
        int fact = 1;
        for(int i = 1; i<=n; i++){
            fact = fact*i;
        }
        return fact;
    }
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int n;
        System.out.println("Enter the number");
        n = scanner.nextInt();

        if (n == 1){
            System.out.println("1");
        }
        else {
            double series = 1.0;
            for (int i = 2 ; i<=n; i++){
                series = series + ((double)i/factorial(i)); 
            }
            System.out.println("the series is : "+ series);
        }
        
        scanner.close();
    }
    
    
}
