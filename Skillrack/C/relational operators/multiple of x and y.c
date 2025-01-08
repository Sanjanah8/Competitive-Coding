#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,x,y;
scanf("%d %d %d",&n,&x,&y);
if(n%x==0&&n%y==0){
    printf("1");
}else{
    printf("-1");
}
}
