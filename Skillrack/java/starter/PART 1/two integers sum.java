1)

import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        sc.next(); 
        int B = sc.nextInt();
        System.out.println(A + B);

        sc.close(); 
    }
}

2)

import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt().split(":");
        int B = sc.nextInt();
        System.out.println(A + B);
    }
}

3)

import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.next(); 
        String[] parts = input.split(":");
        int A = Integer.parseInt(parts[0]);
        int B = Integer.parseInt(parts[1]);
        int C = sc.nextInt();
        System.out.println(A + B + C);
        sc.close(); 
    }
}
