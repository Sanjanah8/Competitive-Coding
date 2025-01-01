#include<stdio.h>
#include<stdlib.h>

int main()
{
int x;
char y;
scanf("%f %c",&x,&y);
if((y=='y'&&x<1)||(y=='m'&&x<12)){
    printf("Yes");
}else{
    printf("No");
}
}
