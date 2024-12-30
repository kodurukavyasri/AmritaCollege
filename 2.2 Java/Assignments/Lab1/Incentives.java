package Assigments.Lab1;
import java.util.Scanner;

public class Incentives{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the incentive amount : ");
        int incentive = scanner.nextInt();

        System.out.println("Enter the count of on-time days (0-6): ");
        int count = scanner.nextInt();

        scanner.close();

        // Validating the maximum limit of the count 
        if (count > 6){
            System.out.println("Wrong value entered for count!");
            return;
        }

        if (count == 0){
            System.out.println("Total incentive is 0");
            return;
        }

        // Calculating incentive 
        int totalincentive = 0;
        for(int i=0; i<count ; i++){
            totalincentive = totalincentive + (incentive +(i*200));
        }
        System.out.println("The total incentive is : " + totalincentive );
    }
}