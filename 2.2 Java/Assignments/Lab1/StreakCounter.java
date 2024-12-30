package Assigments.Lab1;
import java.util.Scanner;

public class StreakCounter {

    // Function to calculate streak(n)
    public static int streak(int n) {
        int k = 1;
        while (true) {
            if ((n + k) % (k + 1) != 0) {
                return k;
            }
            k++;
        }
    }

    // Function to count how many integers have streak value equal to s
    public static int countStreaks(int s, int N) {
        int count = 0;
        for (int n = 2; n < N; n++) {
            if (streak(n) == s) {
                count++;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read input values
        int s = scanner.nextInt();
        int N = scanner.nextInt();

        // Calculate and output the result
        int result = countStreaks(s, N);
        System.out.println(result);
        
        scanner.close();
    }
}
