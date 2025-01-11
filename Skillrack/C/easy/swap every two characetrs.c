#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d ",&arr[i]);
}
for(int i=0;i<n-1;i+=2){
    int temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
}
