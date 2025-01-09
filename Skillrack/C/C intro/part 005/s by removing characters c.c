#include<stdio.h>
#include<stdlib.h>

int main()
{
char str[1001],ch;
scanf("%[^\n]\n%c",str,&ch);
int i=0,len;
while(str[i]!='\0' && str[i]!=ch){
    i++;
}printf("%s",&str[i+1]);
}
