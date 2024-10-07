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
    printf("%d ",arr[1]);
    for(int i=1;i<n-1;i++){
        printf("%d ",arr[i-1]+arr[i+1]);
    }
printf("%d",arr[n-2]);
return 0;
}
