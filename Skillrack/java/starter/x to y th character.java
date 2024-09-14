import java.util.Scanner;

public class SubstringExample {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String inputString = sc.nextLine();
        System.out.print("Enter starting position (X): ");
        int X = sc.nextInt();
        System.out.print("Enter ending position (Y): ");
        int Y = sc.nextInt();
        System.out.println("The substring is: " + inputString.substring(X-1, Y));
        sc.close();
    }
}
