#include<stdio.h>
#include<stdlib.h>

int main()
{
char c;
c=getchar();
if(c=='y'||c=='Y'){
    printf("yes");
}else{
    if(c=='n'||c=='N'){
        printf("no");
    }else{
        printf("invalid");
    
}
}
