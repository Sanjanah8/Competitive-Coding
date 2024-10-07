#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,flag=0;
scanf("%d", &n);
if(n<0){
    n=n*-1;
    flag=1;
}
while(n>10){
    n=n/10;
}
if(flag==0){
    printf("%d",n);
}
else{
    printf("-%d",n);
}
return 0;
}
