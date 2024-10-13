#include<stdio.h>
#include<stdlib.h>

int main()
{
char L;
L=getchar();
L=toupper(L);
switch(L){
    case 'W':
    printf("whatsapp");
    break;
    case 'T':
    printf("twitter");
    break;
    case 'F':
    printf("facebook");
    break;
    default:
    printf("undefined");
}
}
