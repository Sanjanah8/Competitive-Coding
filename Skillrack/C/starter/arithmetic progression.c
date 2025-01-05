#include<stdio.h>
#include<stdlib.h>

int main()
{
int t,i,d;
scanf("%d",&t);
scanf("%d",&i);
scanf("%d",&d);
for(int n=1;n<=t;n++){
    int term=i+(n-1)*d;
    printf("%d ",term);
}
}
