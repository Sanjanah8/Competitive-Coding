import java.util.*;
public class Hello {

    public static void main(String[] args) {
	Scanner sc=new Scanner(System.in);
	int n=sc.nextInt();
	int x=sc.nextInt();
	int count=1;
while(count<=x){
    System.out.println(count*n+" ");
    count++;
}
	}
}
