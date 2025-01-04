#include<stdio.h>
#include<stdlib.h>

int main()
{
int m,x;
scanf("%d %d",&m,&x);
for(int i=1;i<=m;i++){
    printf("%d ",x*i);
    if(m==x*i){
        break;
    }
}
}
