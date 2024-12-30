import java.util.Scanner;

public class Perfect_no {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int n;

        System.out.println("Enter the no : ");
        n = scanner.nextInt();

        perfect(n);

        scanner.close();
    }

    public static void perfect(int n){
        int count = 1;
        for(int i = 2; i <= n/2; i++){
            if(n % i == 0){
                count = count + i;
            }
        }

        if(count == n){
            System.out.println("It is a perfect no ");
        }

        else{
            System.out.println("It is not a perfect no ");
        }
    }
    
}
