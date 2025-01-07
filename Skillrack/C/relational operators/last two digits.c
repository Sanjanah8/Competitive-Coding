#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y;
scanf("%d %d",&x,&y);
int lastx=x%10;
int lasty=(y/10)%10;
if(lastx%2==0||lasty%2==0){
printf("%d",x%100);}
else{
    printf("%d",y%100);
}
}
