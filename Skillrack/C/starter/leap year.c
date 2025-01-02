#include<stdio.h>
#include<stdlib.h>
int isleapyear(int y){
    return(y%4==0&&y%100!=0)||(y%400==0);
}
int main()
{
int y;
scanf("%d",&y);
if(isleapyear(y)){
    printf("Leap year");
}else{
    if(y%100==0){
        y+=4;
    }else if(y%2!=0){
        y+=13;
    }else if(y%2==0){
        y+=14;
    }printf("Not a leap year");
}return 0;
}
