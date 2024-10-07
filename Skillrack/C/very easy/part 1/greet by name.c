#include<stdio.h>
#include<stdlib.h>

int main()
{
char name[100];
fgets(name,100,stdin);
int i=0;
while(name[i]!='\n'&& name[i]!='\r'&&name[i]!='\0'){
    i++;
}
name[i]='\0';
printf("Hi %s, Welcome to Taiwan!",name);
}
