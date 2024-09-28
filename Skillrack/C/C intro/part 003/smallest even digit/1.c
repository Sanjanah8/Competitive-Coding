#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d",&n);
for(;n>0;n/=10){
    int digit=n%10;
    if(digit%2==0&&digit<min){
        min=digit;
    }
}
printf("%d",min);
return 0;
}
