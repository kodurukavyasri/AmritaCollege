import java.util.Scanner;

public class Primefactors {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int n;

        System.out.println("Enter the number");
        n = scanner.nextInt();

        if(isprime(n) == true){
            System.out.println("It is prime");
        }else{
            System.out.print("Prime factors of "+ n + "are:");
            factors(n);
        }

        scanner.close();

    }

    public static boolean isprime(int num){
        if (num <= 1) return false;
            for(int i = 2 ; i <= Math.sqrt(num); i++){
                if (num % i == 0) return false;
            }
            return true;
    }

    public static void factors(int num){
       while (num / 2 != 0){
            num = num / 2;
            System.out.println("2");
       }

       for(int i = 3; i < Math.sqrt(num); i++){
            if(num / i == 0){
                System.out.println("i");
            }
       }

    }
}
    