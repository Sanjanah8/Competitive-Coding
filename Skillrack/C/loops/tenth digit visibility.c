#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d",&n);
if(((n/10)%10)%5==0){
    printf("Yes");
}else{
    printf("No");
}return 0;
}
