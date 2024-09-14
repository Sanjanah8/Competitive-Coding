1)
    
import java.util.Scanner;
public class StringToCharArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine(); // Read input string
        char[] charArr = str.toCharArray(); 

        for (char ch : charArr) { 
            System.out.println(ch + " "); 
        }

        sc.close(); // Close scanner
    }
}

2)
    
import java.util.Scanner;

public class StringToCharArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str = sc.nextLine();

        char[] charArray = str.toCharArray();

        for (int i = 0; i < charArray.length; i++) {
            System.out.println(charArray[i]);
        }

        sc.close();
    }
}
