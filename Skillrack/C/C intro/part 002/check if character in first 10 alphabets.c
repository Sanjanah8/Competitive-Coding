#include<stdio.h>
#include<stdlib.h>

int main()
{
char ch;
scanf("%d",&ch);
switch(ch){
    case 'a' ... 'j':
    printf("yes");
    break;
    default:
    printf("no");
}
return 0;
}
