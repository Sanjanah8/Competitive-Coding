#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if((b-a)==(c-b)){
    printf("Yes");
}else{
    printf("No");
}
}
