#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d",&n);
if(n%2==0&& ((n%100)/10)%2==0){
    printf("Even");
}
else{
    printf("Odd");
}
return 0;
}
