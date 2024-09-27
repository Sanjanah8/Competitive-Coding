#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d",&n);
if(n%2||(n/10)%2){
    printf("Odd");
}
else{
    printf("Even");
}
return 0;
}
