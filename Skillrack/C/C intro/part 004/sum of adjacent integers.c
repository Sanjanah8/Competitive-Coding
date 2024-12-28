#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d",&n);
int array[n];
for(int i=0;i<n;i++){
    scanf("%d ",&array[i]);
}
printf("%d ",array[1]);
for(int i=1;i<n-1;i++){
    printf("%d ",array[i-1]+array[i+1]);
}
printf("%d",array[n-2]);
return 0;
}
