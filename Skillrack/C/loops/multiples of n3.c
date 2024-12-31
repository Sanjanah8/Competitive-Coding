#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a>b){
    int max=a;
    a=b;
    b=max;
}for(int ctr=a;ctr<=b;ctr++){
    if(ctr%c==0){
        printf("%d ",ctr);
    }
}return 0;
}
