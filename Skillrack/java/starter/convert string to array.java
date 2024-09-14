import java.util.Scanner;

public class StringToCharArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str = sc.nextLine(); // Read input string

        char[] charArr = str.toCharArray(); 

        for (char ch : charArr) { 
            System.out.println(ch + " "); 
        }

        sc.close(); // Close scanner
    }
}
