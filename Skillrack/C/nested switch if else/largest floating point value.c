#include<stdio.h>
#include<stdlib.h>

int main()
{
float a,b,c;
scanf("%f %f %f",&a,&b,&c);
if( fmod(a,1)>=fmod(b,1)&&fmod(a,1)>=fmod(c,1)){
    printf("%.2f",a);
}else if(fmod(b,1)>=fmod(a,1)&&fmod(b,1)>=fmod(c,1)){
    printf("%.2f",b);
}else{
    printf("%.2f",c);
}
}
