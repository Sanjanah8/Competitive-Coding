#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y,n;
scanf("%d %d %d",&x,&y,&n);
if(n%x==0&&n%y==0){
    printf("BOTH");
}
else if(n%x==0){
    printf("%d",x);
}
else if(n%y==0){
    printf("%d",y);
}
else
{
    printf("NONE");
}
return 0;
}
