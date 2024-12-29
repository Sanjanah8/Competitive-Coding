#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d",&n);
if(n%10>(n/10)%10){
    printf("d",n%10);
}else{
    printf("%d",(n/10)%10);
}
return 0;
}
