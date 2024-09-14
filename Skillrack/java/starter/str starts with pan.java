import java.util.Scanner;

public class StartsWithPan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str = sc.nextLine();

        if (str.startsWith("pan")) {
            System.out.println("yes");
        } else {
            System.out.println("no");
        }

        sc.close();
    }
}
