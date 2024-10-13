#include<stdio.h>
#include<stdlib.h>

int main()
{
int m,n;
scanf("%d%d",&m,&n);
int sum=m+n;
if(sum%2==0){
    printf("even");
}else{
    printf("odd");
}
}
