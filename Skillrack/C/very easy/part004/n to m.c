#include<stdio.h>
#include<stdlib.h>

int main()
{
int m,n;
scanf("%d%d",&m,&n);
int ctr=n;
while(ctr>=m){
    printf("%d ",ctr--);
}
}
