#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y,i,j;
scanf("%d%d",&x,&y);
for(i=x,j=y;i<=y;i++,j--)
{
    if(i%2==1){
        printf("%d ",i);
    }if(j%2==0){
        printf("%d ",j);
}
    
}
}
