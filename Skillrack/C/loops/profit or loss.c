#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y,z;
scanf("%d %d %d",&x,&y,&z);
if(x*y<z){
    printf("Profit");
}else{
    printf("Loss");
}
return 0;
}
