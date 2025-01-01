#include<stdio.h>
#include<stdlib.h>

int main()
{
char ch,c1,c2;
scanf("%c %c",&c1,&c2);
c1=tolower(c1);
if(c1=='u'){
    c2=toupper(c2);
    char alpha='A';
    while(alpha<='Z'){
        if(alpha!=c2){
            printf("%c ",alpha);}
            alpha++;
            }
    }
else if(c1=='l'){
    c2=tolower(c2);
    char alpha='a';
    while(alpha<='z'){
        if(alpha!=c2){
            printf("%c ",alpha);
        }alpha++;
            }
        }else{
            printf("INVALID");
}return 0;
}
