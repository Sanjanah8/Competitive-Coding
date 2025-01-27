#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,curr;
scanf("%d",&n);
int count[100]={0};
for(int ctr=1;ctr<=n;ctr++){
    scanf("%d",&curr);
    count[curr]++;
}int sum=0;
for(int val=1;val<=99;val++){
    if(count[val]==1){
        sum+=val;
    }
}printf("%d",sum);
return 0; 
}
