#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y;
scanf("%d%d",&x,&y);
int sum=0;
if(x>y){
    int temp=x;
    x=y;
    y=temp;
}while(x<=y){
    sum+=x;
    x++;
}printf("%d",sum);
return 0;
}
