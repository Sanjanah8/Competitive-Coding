#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d",&n);
int arr[n],even[n],count=0;
for(int i=0;i<n;i++){
scanf("%d ",&arr[i]);
}
for(int i=0;i<n;i++){
    if(arr[i]%2==0){
        even[count++]=arr[i];
    }}
    for(int i=0;i<count-1;i++){
        for(int j=i+1;j<count;j++){
            if(even[i]<even[j]){
                int temp=even[i];
                even[i]=even[j];
                even[j]=temp;
            }
        }
    }
        for(int i=0;i<count;i++){
        printf("%d ",even[i]);
    }
return 0;
}
