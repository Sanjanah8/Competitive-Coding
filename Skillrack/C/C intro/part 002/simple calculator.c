#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y;
char ch;
scanf("%d %d\n%c",&x,&y,&ch);
switch(ch){
    case '+':
    printf("%d",x+y);
    break;
    case '-':
    printf("%d",x-y);
    break;
    case '*':
    printf("%d",x*y);
    break;
    case '/':
    printf("%d",x/y);
    break;
    case '%':
    printf("%d",x%y);
    break;
    default:
    printf("INVALIDOPERATION");
}
return 0;
}
