#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y;
scanf("%d %d",&x,&y);
if((x%10)!=0&&y%(x%10)==0){
    printf("YES");
}else{
    printf("NO");
}
}
