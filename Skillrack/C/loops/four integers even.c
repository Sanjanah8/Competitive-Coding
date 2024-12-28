#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b,c,x,co=0;
scanf("%d %d %d %d",&a,&b,&c,&x);
if(a%2==0)
co++;
if(b%2==0)
co++;
if(c%2==0)
co++;
if(co>=2){
    for(int i=2;i<=x;i+=2){
        printf("%d ",i);
    }
}else
{
    for(int i=x;i>=1;i--){
        if(i%2!=0){
            printf("%d ",i);
            }
    }
}
printf("\n");
return 0;
}
