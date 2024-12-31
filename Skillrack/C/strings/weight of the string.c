#include<stdio.h>
#include<stdlib.h>

int main()
{
char str[101];
scanf("%s",str);
int i=0,weight=0;
while(str[i]!='\0'){
    char ch=tolower(str[i]);
    weight+=(ch-'a'+1);
    i++;
}printf("%d", weight);
return 0;
}
