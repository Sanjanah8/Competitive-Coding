#include<stdio.h>
#include<stdlib.h>
int main()
{
char ch;
scanf("%c",&ch);
switch(ch){
    default:
    printf("c");
    return 0;
    case 'a':
    case'e':
    case 'i':
    case 'o':
    case 'u':
    printf("v");
    return 0;
}
}
