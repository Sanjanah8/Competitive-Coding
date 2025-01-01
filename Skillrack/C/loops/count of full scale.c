#include<stdio.h>
#include<stdlib.h>

int main()
{
int f,h;
char ch;
do{
    scanf("%c",&ch);
    if(ch=='T'){
        f++;
    }else if(ch=='S'){
        h++;
    }
}while(ch!='\r'&&ch!='\n');{
    printf("%d",f+h/2);
    return 0;
}
}
