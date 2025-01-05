#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,x;
scanf("%d %d",&n,&x);
int divisor=pow(10,x);
int lastdigits=n%divisor;
printf("%d",lastdigits);
}
