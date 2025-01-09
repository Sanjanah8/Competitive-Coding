import java.util.Scanner;

public class SubstringExample {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // Read the input string
        System.out.print("Enter the string: ");
        String str = sc.nextLine();
        
        // Read the starting position (x)
        System.out.print("Enter the starting position (x): ");
        int x = sc.nextInt();
        
        // Read the ending position (y)
        System.out.print("Enter the ending position (y): ");
        int y = sc.nextInt();
        
        // Print the substring from position x to y (y is exclusive)
        System.out.println(str.substring(x, y));
        
        sc.close();
    }
}
