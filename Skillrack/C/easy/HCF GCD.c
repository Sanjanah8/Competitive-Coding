#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y;
scanf("%d",&x);
scanf("%d",&y);
while(y!=0){
    int temp=y;
    y=x%y;
    x=temp;
}printf("%d",x);
}
