#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b;
scanf("%d%d",&a,&b);
if(a==b){
    printf("EQUAL");
}else{
    printf("%d",a<b?a:b);
}
}
