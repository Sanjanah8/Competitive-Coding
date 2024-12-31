#include<stdio.h>
#include<stdlib.h>

int main()
{
char str[101];
scanf("%s",str);
int i=0;
while(str[i]!='\0'){
    if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'){
        printf("%.c",str[i]);
    }i++;
}return 0;
}
