import java.util.Scanner;

public class StringLength {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine(); 
        int length = str.length(); 
        System.out.println(length); 
        sc.close(); 
    }
}
