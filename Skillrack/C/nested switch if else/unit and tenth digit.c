#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,d;
scanf("%d %d",&n,&d);
if(d==1){
    printf("%d",n%10);
}else if(d==2){
    printf("%d",(n/10)%10);
}else{
    printf("%d",(n%10)*(n/10)%10);
}
}
