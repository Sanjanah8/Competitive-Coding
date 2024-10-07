#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n1,n2,sum,result=0;
    scanf("%d %d",&n1,&n2);
    sum=n1+n2;
    while(sum>0){
        result=(sum%10)+(result*10);
        sum/=10;
    }
printf("%d", result);
return 0;
}
