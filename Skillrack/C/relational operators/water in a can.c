#include<stdio.h>
#include<stdlib.h>

int main()
{
int l,c1,c2;
scanf("%d",&l);
scanf("%d %d",&c1,&c2);
int smallercapacity=(c1<c2)?c1:c2;
int remaining=l-smallercapacity;
printf("%d",remaining);
}
