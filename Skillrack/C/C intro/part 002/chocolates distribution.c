#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b,n;
scanf("%d %d %d",&a,&b,&n);
if((a+b)%n==0){
    printf("%d",(a+b)/n);
}
else{
    printf("Invalid");
}
return 0;
}
