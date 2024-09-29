#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,max=-1;
scanf("%d",&n);
while(n>0){
    if(n%10>max){
        max=n%10;
    }
    n/=10;
} 
printf("%d",max);
return 0;
}
