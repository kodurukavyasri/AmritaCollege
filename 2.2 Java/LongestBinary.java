import java.util.Scanner;

/** Comment starts 
*This is
*sample comment */

public class LongestBinary {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        String n;
        System.out.println("Enter the binary digit ");
        n = scanner.nextLine();

        System.out.println(zero(n));
        scanner.close();
    }

    public static int zero(String n){
        int max_count = 0;
        int count = 0;
        
        for (int i=0; i<n.length(); i++){
            if (n.charAt(i) =='0'){
                count++;
            }else{
                max_count = Math.max(max_count,count);
                count = 0;
            }
        }
        max_count = Math.max(max_count,count);
        return max_count;
    } 
}
