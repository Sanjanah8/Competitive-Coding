import java.util.Scanner;

public class OddEvenCheck {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int num1 = sc.nextInt(); 
        int num2 = sc.nextInt(); 
        
        if (num1 % 2 != 0 && num2 % 2 == 0) { 
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }

        sc.close(); 
    }
}
