#include<stdio.h>
#include<stdlib.h>

int main()
{
int mc,n;
int revenue=0;
scanf("%d %d",&mc,&n);
if(n>500){
    revenue+=(n-500)*250;
    n=500;
}if(n>50){
    revenue+=(n-50)*200;
    n=50;
}if(n>5){
    revenue+=(n-5)*150;
    n=5;
}if(n>0){
    revenue+=n*100;
}if(revenue>mc){
    printf("Profit");
}else if(revenue<mc){
    printf("Loss");
}else if(revenue==mc){
    printf("BreakEven");
}}
