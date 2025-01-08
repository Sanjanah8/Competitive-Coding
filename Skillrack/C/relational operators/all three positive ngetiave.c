#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y,z;
scanf("%d %d %d",&x,&y,&z);
if((x>0&&y>0&&z>0)||(x<0&&y<0&&z<0)){
    printf("Yes");
}else{
    printf("No");
}
}
