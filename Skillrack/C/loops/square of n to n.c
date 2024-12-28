#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d",&n);
for(int i=n*n;i>=n;i--){
    printf("%d ",i);
}
printf("\n");
return 0;
}
