import java.util.*;
public class Hello {

    public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int count=1;
		int sum=0;
		while(count<=n){
		    sum+=sc.nextInt();
		    count++;
		}
System.out.println(sum);
	}
}
