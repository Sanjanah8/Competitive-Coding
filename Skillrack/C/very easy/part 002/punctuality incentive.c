#include<stdio.h>
#include<stdlib.h>

int main()
{
int start,day;
scanf("%d%d",&start,&day);
int payable=0;
int count=0;
while(count<day){
    payable+=(start+count*200);
    count++;
}
printf("%d",payable);
}
