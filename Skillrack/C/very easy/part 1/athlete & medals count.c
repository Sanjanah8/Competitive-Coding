#include<stdio.h>
#include<stdlib.h>

int main()
{
char name[100];
int medal;
fgets(name,100,stdin);
scanf("%d",&medal);
int i=0;
while(name[i]!='\r'&&name[i]!='\n'&&name[i]!='\0'){
    i++;
}name[i]='\0';
printf("%s won %d medals",name,medals);
}
