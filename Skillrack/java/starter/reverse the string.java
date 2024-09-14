import java.util.Scanner;

public class ReverseString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str = sc.nextLine(); 

        StringBuilder sb = new StringBuilder(str); 

        sb.reverse(); // Reverse the string using StringBuilder

        System.out.println(sb.toString()); // Print the reversed string

        sc.close(); // Close scanner
    }
}
