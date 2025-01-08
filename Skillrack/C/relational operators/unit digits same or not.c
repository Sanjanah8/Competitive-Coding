#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y,n;
scanf("%d %d %d",&x,&y,&n);
if(x%10==n && y%10==n){
    printf("Yes");
}else{
    printf("No");
}
}
