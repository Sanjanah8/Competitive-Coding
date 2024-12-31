#include<stdio.h>
#include<stdlib.h>

int main()
{
unsigned long long int n;
scanf("%llu",&n);
int flag=0;
while(n>0){
    if((n%10==2)||(n%10==3)||(n%10==5)||(n%10==7)){
        flag=1;
        printf("%d",n%10);
    }n/=10;
}if(flag==0){
    printf("-1");
}return 0;
}
