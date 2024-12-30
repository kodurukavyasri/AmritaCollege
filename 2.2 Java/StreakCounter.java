import java.util.Scanner;

public class StreakCounter {

    // Function to calculate the streak value for a given integer n
    public static int streak(int n) {
        int k = 1;
        while (true) {
            // Check if (n + k) is not divisible by (k + 1)
            if ((n + k) % (k + 1) != 0) {
                return k; // Return the smallest k satisfying the condition
            }
            k++;
        }
    }

    // Function to count how many integers have the streak value s in the range (1, N)
    public static int P(int s, int N) {
        int count = 0;
        for (int n = 2; n < N; n++) { // Loop from 2 to N-1
            if (streak(n) == s) {
                count++; // Increment count if streak(n) equals s
            }
        }
        return count; // Return the total count
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read input values for s and N
        System.out.print("Enter the streak value (s): ");
        int s = scanner.nextInt();
        
        System.out.print("Enter the upper limit (N): ");
        int N = scanner.nextInt();

        // Calculate and print the result
        int result = P(s, N);
        System.out.println(result);

        scanner.close(); // Close the scanner
    }
}
