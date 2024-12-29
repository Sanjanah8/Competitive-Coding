#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y,z;
scanf("%d %d %d",&x,&y,&z);
if(abs(y-z)<=x){
    printf("YES");
}else{
    printf("NO");
}return 0;
}
