import java.util.Scanner;

public class PrintBasedOnInput {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        char ch = sc.next().charAt(0); 
        switch (ch) {
            case 's': 
                System.out.println("SKILL"); // Print "SKILL"
                break;
            default: 
                System.out.println("RACK"); 
                break;
        }

        sc.close(); 
    }
}
