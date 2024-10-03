import java.util.*;
public class Hello {

    public static void main(String[] args) {
	Scanner sc=new Scanner(System.in);
	int n=sc.nextInt();
	int x=sc.nextInt();
	int multipe=n;
	boolean run=true;
	while(run){
	    System.out.print(multiple+" ");
	    if(multiple%x==0){
	        run=false;
	    }
	    multiple+=n;
	}

	}
}
