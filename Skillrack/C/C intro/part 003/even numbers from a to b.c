#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b;
scanf("%d  %d",&a,&b);
while(a<=b){
    if(a%2==0){
        printf("%d ",a);
    }
    a++;
}
return 0;
}
