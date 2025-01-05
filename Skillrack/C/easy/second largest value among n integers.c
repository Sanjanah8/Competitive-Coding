#include<stdio.h>
#include<stdlib.h>
#include <limits.h>
int main()
{
int n,first=INT_MIN,second=INT_MIN;
scanf("%d",&n);
int num;
for(int i=0,num;i<n;i++){
    scanf("%d\n",&num);
    if(num>first){
        second=first;
        first=num;
    }else if(num>second &&num!=first){
        second=num;
    }
}printf("%d",second);
}
