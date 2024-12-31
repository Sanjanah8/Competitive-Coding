#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,d[144]={0},count=0;
unsigned long long int v;
scanf("%d",&n);
while(n--){
    scanf("%llu",&v);
    int sum=0;
    while(v>0){
        sum+=v%10;
        v/=10;
    }if(d[sum]==0){
        count++;
    }d[sum]++;
    
}printf("%d",count);
}
