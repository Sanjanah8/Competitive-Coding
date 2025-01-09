import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();  // Read the entire line of input
        
        // Print the last character using printf in a single statement
        System.out.printf("The last character of the string is: %c%n", str.charAt(str.length() - 1));
        
        sc.close();  // Close the scanner
    }
}
