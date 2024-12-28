#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d",&n);
int sum=0;
while(n>0){
    int ud=n%10;
    if(ud%2==1){
        sum+=ud;
    }n=n/10;
}
printf("%d",sum);
}
