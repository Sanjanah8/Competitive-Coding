#include<stdio.h>
#include<stdlib.h>

int main()
{
char ch;
scanf("%c",&ch);
if(ch=='N')
{
    printf("North");
}
else if(ch=='E')
{
    printf("East");
}
else if(ch=='S')
{
    printf("South");
}
else if(ch=='W')
{
    printf("West");
}
else
{
    printf("Invalid");
}
return 0;
}
