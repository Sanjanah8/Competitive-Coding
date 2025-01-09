import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the first number: ");
        int num1 = sc.nextInt();  // Read first number
        System.out.print("Enter the second number: ");
        int num2 = sc.nextInt();  // Read second number
        
        // Calculate the absolute difference
        int difference = Math.abs(num1 - num2);
        
        // Print the result
        System.out.printf("The absolute difference is: %d%n", difference);
        
        sc.close();  // Close the scanner
    }
}
