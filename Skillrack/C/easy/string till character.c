#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[1001],c;
fgets(s,sizeof(s),stdin);
    scanf("%c", &c);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==c){
            break;
        }printf("%c", s[i]);
    }
}
