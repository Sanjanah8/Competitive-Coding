#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b,c,d;
scanf(" %c %c %c %c",&a,&b,&c,&d);
if(a<=b && b<=c && c<=d){
    printf("YES");
}else{
    printf("NO");
}
}
