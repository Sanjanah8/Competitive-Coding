#include<stdio.h>
#include<stdlib.h>

int main()
{
int bill;
scanf("%d",&bill);
int payable=bill;
if(bill>2000){
    payable=bill*0.9;
}printf("%d",payable);
}
