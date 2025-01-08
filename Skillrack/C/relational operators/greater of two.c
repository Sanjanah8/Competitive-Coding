#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
int a1=(a+b)/2;
int a2=(b+c)/2;
if(a1>a2){
    printf("%d %d",a,b);
}else{
    printf("%d %d",b,c);
}
}
