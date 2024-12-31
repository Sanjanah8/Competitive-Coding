#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d",&n);
int l=0,ctr=n,curr;
while(ctr>0){
    scanf("%d",&curr);
    if(l<curr){
        l=curr;
    }ctr--;
}printf("%d",l);
}
