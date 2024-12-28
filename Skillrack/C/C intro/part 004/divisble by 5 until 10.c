#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
while(scanf("%d",&n)>0){
    if(n==10){
        break;
    }
    else if(n%5==0)
    {
        printf("%d ",n);
    }
}return 0;
}
