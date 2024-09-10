import java.util.*;
public class Hello {

    public static void main(String[] args) {
		Scanner sc=new scanner(system.in);
		int m=sc.nextInt();
		int n=sc.nextInt();
		int sum=0;
		int count=m;
		while(count<=n){
		    if(count%2==0){
		        sum+=count;
		    }
		}count++;
	}System.out.print(sum);
}
