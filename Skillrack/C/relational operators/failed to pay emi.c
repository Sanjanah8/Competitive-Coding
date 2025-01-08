#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
int count=0;
if(a==0){
    count++;
}if(b==0){
    count++;
}if(c==0){
    count++;
}printf("%d",count);
}
