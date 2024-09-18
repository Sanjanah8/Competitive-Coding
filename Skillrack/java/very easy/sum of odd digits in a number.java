import java.util.*;
public class Hello {
    public static void main(String[] args) {
	Scanner sc=new Scanner(System.in);
	int n=sc.nextInt();
	int sum=0;
while(n>0){
    int unitDigit=n%10;
    if(unitDigit%2==1){
        sum+=unitDigit;
    }
    n=n/10;
}
System.out.println(sum);
	}
}
