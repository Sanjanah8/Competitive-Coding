#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d",&n);
if(n>=100&n<=999){
    printf("YES");
}else if(n<=-100&&n>=-999){
    printf("YES");
}else{
    printf("NO");
}
}
