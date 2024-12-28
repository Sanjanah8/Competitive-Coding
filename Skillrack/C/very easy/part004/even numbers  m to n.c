#include<stdio.h>
#include<stdlib.h>

int main()
{
int m,n;
scanf("%d%d",&m,&n);
int ctr=m;
int sum=0;
while(ctr<=n){
    if(ctr%2==0){
        sum+=ctr;
    }ctr++;
}
printf("%d",sum);
}
