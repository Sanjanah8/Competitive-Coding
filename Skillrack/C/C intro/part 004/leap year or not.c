#include<stdio.h>
#include<stdlib.h>
int checkleap(int year){
    if((year%400==0)||(year %100!=0&&year%4==0))
    return 1;
    return 0;
}
int main()
{
int year;
scanf("%d",&year);
printf("%s",checkleap(year)?"Leap Year":"Not a Leap Year");
return 0;
}
