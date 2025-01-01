#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,product=1;
scanf("%d",&n);
while(n>0){
    product*=n%10;
    n/=10;
}printf("%d",product);
return 0;
}
