import java.util.Scanner;

public class ContainsString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str1 = sc.nextLine();
        String str2 = sc.nextLine();

        if (str1.contains(str2)) {
            System.out.println("yes");
        } else {
            System.out.println("no");
        }

        sc.close();
    }
}
