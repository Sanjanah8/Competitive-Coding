#include<stdio.h>
#include<stdlib.h>

int main()
{
char a,b,c;
scanf("%c %c %c",&a,&b,&c);
if(a==b||a==c||b==c){
    printf("Yes");
}else{
    printf("No");
}
}
