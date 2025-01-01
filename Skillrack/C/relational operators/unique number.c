#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a==b){
    printf("%d",(a==c)?-1:c);
}else if(b==c){
    printf("%d",a);
}else if(a==c){
    printf("%d",b);
}else{
    printf("-1");
}
}
