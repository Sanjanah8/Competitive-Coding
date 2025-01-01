#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y,sum;
scanf("%d %d",&x,&y);
sum=(x%10)+((x/10)%10);
if(sum==y){
    printf("%d",x+y);
}
else{
    printf("%d",x);
}
}
