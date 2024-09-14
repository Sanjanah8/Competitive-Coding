import java.util.Scanner;

public class TenthDigitOddCheck {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        if (((num / 10) % 10) % 2 != 0) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }

        sc.close(); 
    }
}
