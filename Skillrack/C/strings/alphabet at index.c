#include<stdio.h>
#include<stdlib.h>

int main()
{
char str[101];
scanf("%s",&str);
int i;
for(i=0;str[i]!='\0';i++){
    printf("%c",str[str[i]-'a']);
}return 0;
}
