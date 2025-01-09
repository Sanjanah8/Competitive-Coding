import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter an alphabet: ");
        char ch = sc.next().charAt(0);  // Read the first character of the input
        
        // Print the reverse position directly in a single print statement
        System.out.printf("The reverse position of '%c' is: %d%n", ch, 26 - (Character.toUpperCase(ch) - 'A'));
        
        sc.close();  // Close the scanner
    }
}
