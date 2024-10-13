#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
int largest=a;
if(b>largest){
    largest=b;
}if(c>largest){
    largest=c;
}
printf("%d",largest);
}
