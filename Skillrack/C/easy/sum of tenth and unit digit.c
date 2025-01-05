#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d",&n);
int sum=(n%10)+(n/10)%10;
printf("%d",sum);
}
