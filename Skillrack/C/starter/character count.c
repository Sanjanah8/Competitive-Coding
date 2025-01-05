#include<stdio.h>
#include<stdlib.h>

int main()
{
char s[1000],d;
int count=0;
fgets(s,sizeof(s),stdin);
scanf("%c",&d);
for(int i=0;i<strlen(s);i++){
    if(s[i]==d){
        count++;
    }
}printf("%d",count);
}
