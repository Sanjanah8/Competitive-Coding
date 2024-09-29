#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y,i,result=1;
scanf("%d %d",&x,&y);
for(i=1;i<=y;i++){
    result*=x;
}
printf("%d",result);
return 0;
}
