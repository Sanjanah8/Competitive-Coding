#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
int n,min=INT_MAX,max=INT_MIN;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    int curr;
    scanf("%d",&curr);
    if(curr,min){
        min=curr;
    }else if(curr>max){
        max=curr;
    }
}printf("%d %d",min,max);
return 0;
}
