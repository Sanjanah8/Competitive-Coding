#include<stdio.h>
#include<stdlib.h>

int main()
{
int token;
scanf("%d",&token);
int husband=token/100;
int wife=token%100;
if(husband>wife){
    printf("Husband");
}else{
    printf("Wife");
}
}
