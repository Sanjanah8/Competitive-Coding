#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,digit=0;
scanf("%d",&n);
while(n>0){
    digit++;
    n/=10;
}
printf("%d",digit);
return 0;
}
