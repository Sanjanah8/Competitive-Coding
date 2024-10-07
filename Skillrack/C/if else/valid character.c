#include<stdio.h>
#include<stdlib.h>

int main()
{
char x,y,z;
scanf("%c %c %c",&x,&y,&z);
if((z-'a'+1)==(y-x)){
    printf("YES");
}
else
{
    printf("NO");
}
return 0;
}
