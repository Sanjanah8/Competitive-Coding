#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,curr,max=INT_MIN;
scanf("%d",&n);
while(n>0){
    scanf("%d",&curr);
    if(curr%2!=0&&curr>max){
        max=curr;
    }
    n--;
}
printf("%d",max);
return 0;
}
