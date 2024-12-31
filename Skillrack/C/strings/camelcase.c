#include<stdio.h>
#include<stdlib.h>

int main()
{
char str[101];
scanf("%s",str);
int i;
for(i=0;str[i]!='\0';i++){
    printf("%c",tolower(str[i]));
    if(isupper(str[i+1])){
        printf(" ");
    }
}return 0;
}
