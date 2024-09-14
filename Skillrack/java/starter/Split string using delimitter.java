1)
import java.util.Scanner;

public class SplitString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str = sc.nextLine();

        String[] strArr = str.split(":");

        for (String val : strArr) {
            // Print each substring with the first letter capitalized
            System.out.println(val);
        }

        sc.close();
    }
}

2)
import java.util.Scanner;

public class SplitString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str = sc.nextLine();

        String[] strArr = str.split(":");

        for (String val : strArr) {
            System.out.println(val.substring(0, 1).toUpperCase() + val.substring(1).toLowerCase());
        }

        sc.close();
    }
}
