#include<stdio.h>
#include<stdlib.h>

int main()
{
int m,n;
scanf("%d%d",&m,&n);
int counter=m;
while(counter<=n){
    printf("%d",counter++);
}
}
