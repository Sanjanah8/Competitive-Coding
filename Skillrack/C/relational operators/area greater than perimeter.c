#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y;
scanf("%d %d",&x,&y);
int area=x*y;
int perimeter=2*(x+y);
if(area>perimeter){
    printf("YES");
}else{
    printf("NO");
}
}
