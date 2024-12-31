#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,x;
scanf("%d%d",&n,&x);
int multiple=n;
int run=1;
while(run){
    printf("%d ",multiple);
    if(multiple%x==0){
        run=0;
    }multiple+=n;
}
}
