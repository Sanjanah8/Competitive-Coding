#include<stdio.h>
#include<stdlib.h>

int main()
{
int bottomleftx,bottomlefty,length;
scanf("%d%d%d",&bottomleftx,&bottomlefty,&length);
int toprightx=bottomleftx+length;
int toprighty=bottomleftx+length;
printf("%d\n%d",toprightx,toprighty);
}
