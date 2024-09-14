1)

import java.util.Scanner;

public class ConcatenateStrings {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str1 = sc.nextLine();
        String str2 = sc.nextLine();
        String str3 = sc.nextLine();

        StringBuilder sb = new StringBuilder();
        sb.append(str1);
        sb.append(str2);
        sb.append(str3);

        System.out.println(sb.toString());

        sc.close();
    }
}

2) import java.util.Scanner;

public class ConcatenateStrings {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str1 = sc.nextLine();
        String str2 = sc.nextLine();
        String str3 = sc.nextLine();

        StringBuilder sb = new StringBuilder();
        sb.append(str1).append(str2).append(str3);

        System.out.println(sb.toString());

        sc.close();
    }
}
