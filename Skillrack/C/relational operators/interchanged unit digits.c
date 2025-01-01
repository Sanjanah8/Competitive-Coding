#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y;
scanf("%d %d",&x,&y);
int nx=(y%10)+(x/10)*10;
int ny=(x%10)+(y/10)*10;
printf("%d %d",nx,ny);
}
