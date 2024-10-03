import java.util.*;
public class Hello {

    public static void main(String[] args) {
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
int largest=0;
int counter=1;
while(counter<=n){
    int current=sc.nextInt();
    if(counter==1){
        largest =current;
    }
    else if(current>largest){
        largest=current;
    }
}counter++;

	}
	System.out.println(largest);
}
}
