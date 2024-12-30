package Assigments.Lab1;
import java.util.Scanner;

public class streak {
    public static void main(String[] args) {
        Scanner scnr = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int s = scnr.nextInt();

        System.out.println("Enter the value of s : ");
        int N = scnr.nextInt();

        countStreaks(N,s);

        scnr.close();
    }

    // Function to count how many match the streak
    public static int streakn(int n){
        int k = 1;
        int flag =1;
        while(flag != 0){
            if ((n + k) % (k + 1) == 0){
                k++;
            }
            else {
                //System.out.println(k);
                flag = 0;
            }
        }
        return k-1;
    }

    public static void countStreaks(int N, int s){
        int count = 0;
        for(int i  = 1; i >=N ; i++){
            System.out.println(streakn(i));
            if(streakn(i) == s){
                //System.out.println("");
                count++;
            }
        }
        System.out.println("The streak is : " + count);
    }
}
