#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b,n;
scanf("%d%d%d",&a,&b,&n);
int count=a;
while(count<=b){
    if(count%n!=0){
        printf("%d ",count);
    }count++;
}
}
