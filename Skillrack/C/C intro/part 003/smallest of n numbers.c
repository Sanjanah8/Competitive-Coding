#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,curr,i,min=999999;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&curr);
    if(curr<min){
        min=curr;
    }
}
printf("%d",min);
}
