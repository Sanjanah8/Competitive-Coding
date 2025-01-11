#include<stdio.h>
#include<stdlib.h>

int main()
{
int m,n;
scanf("%d %d",&m,&n);
int x=m+n;
int multiple=m;
while(multiple%x!=0){
    multiple +=m;
}
printf("%d",multiple);
}
