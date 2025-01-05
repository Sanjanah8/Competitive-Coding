#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,x;
scanf("%d %d",&n,&x);
for(int i=n;i>=1;i--){
    if(i%x==0){
        printf("%d ",i);
    }
}return 0;
}
