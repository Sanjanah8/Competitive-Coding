#include<stdio.h>
#include<stdlib.h>

int main()
{
int year;
scanf("%d",&year);
if(year%400==0||(year%100!=0&&year%4==0)){
    print("Yes");
}
else{
    printf("No");
}
return 0;
}