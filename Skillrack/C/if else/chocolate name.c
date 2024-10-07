#include<stdio.h>
#include<stdlib.h>

int main()
{
int c1,c2;
char cn1[101],cn2[101];
scanf("%d %s\n%d %s",&c1,cn1,&c2,cn2);
if(c1<c2){
    printf("%s",cn1);
}
else if(c1>C2){
    printf("%s",cn2);
}
else{
    printf("%s %s",cn1,cn2);
}
return 0;
}
