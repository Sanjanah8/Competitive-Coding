import java.util.Scanner;

public class ReverseNCharacters {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        String str = sc.nextLine();
        int n = sc.nextInt();
        
        String firstN = str.substring(0, n);
        String reversed = new StringBuilder(firstN).reverse().toString();
        
        System.out.println(reversed);
        
        sc.close();
    }
}
