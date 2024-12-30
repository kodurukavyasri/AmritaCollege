import java.util.Scanner;

public class Prime_nos {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int n,m;

        System.out.println("Enter no 1");
        n = scanner.nextInt();

        System.out.println("Enter no 2");
        m = scanner.nextInt();

        if (n > m){
            int temp = n;
            n = m;
            m = temp;
        }

        System.out.println("The Prime no between" + n + "and" + m);
        for (int i = n; i <= m; i++ ){
            if (isprime(i)){
                System.out.print(i + ",");
            }
        }

        scanner.close();
    }
  
    public static boolean isprime(int num){
        if (num <= 1) return false;
            for (int i = 2; i <= Math.sqrt(num); i++){
                if (num % i == 0)return false;
            }
            return true;
    }
}


