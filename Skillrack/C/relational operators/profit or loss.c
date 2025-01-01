#include<stdio.h>
#include<stdlib.h>

int main()
{
int c,s;
scanf("%d %d",&c,&s);
if(c>s){
    int loss=c-s;
    printf("Loss=%d",loss);
}else{
    int profit=s-c;
    printf("Profit=%d",profit);
}
}
