#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b;
scanf("%d %d",&a,&b);
for(int i=a;i<=b;i++){
    if(i%2!=0&&i%5==0){
        printf("%d ",i);
    }
}
return 0;
}
