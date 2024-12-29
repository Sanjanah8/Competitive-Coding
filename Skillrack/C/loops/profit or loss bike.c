#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y,z;
scanf("%d %d %d",&x,&y,&z);
if(x+y>z){
    printf("%d Loss",(x+y)-z);
}else if(x+y<z{
printf("%d Profit",z-(x+y));    
}else{
    printf("No Profit No Loss");
}return 0;
}
