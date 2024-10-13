#include<stdio.h>
#include<stdlib.h>

int main()
{
int m,n;
scanf("%d%d",&m,&n);
int count=m;
while(count<=n){
    if(count%15==0){
        printf("%d ",count);
    }
    count++;
}
}
