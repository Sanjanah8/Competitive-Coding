#include<stdio.h>
#include<stdlib.h>

int main()
{
int number;
scanf("%d",&number);
    if(number==0){
        printf("zero");
    }else if(number>0){
        printf("positive");
    }else{
        printf("negative");
    }
}
