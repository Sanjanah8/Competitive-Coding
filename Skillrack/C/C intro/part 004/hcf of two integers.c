#include<stdio.h>
#include<stdlib.h>
int HCF(int n1,n2){
    if(n1==0){
        return n2;
    }
 HCF(n2%n1,n1);   
}
int main()
{
int n1,n2;
scanf("%d %d",&n1,&n2);
printf("%d",HCF(n1,n2));
return 0;
}
