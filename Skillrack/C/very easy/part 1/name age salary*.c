#include<stdio.h>
#include<stdlib.h>

int main()
{
char name[100];
int age;
double salary;
scanf("%s",name);
scanf("%d%lf",&age,&salary);
printf("%s\n**\n%d\n**\n%.2lf",name,age,salary);
}
