#include<stdio.h>
#include<stdlib.h>

int main()
{
int x1,y1,x2,y2;
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
double midx=(x1+x2)/2.0;
double midy=(y1+y2)/2.0;
printf("%.1lf\n%.1lf",midx,midy);
}
