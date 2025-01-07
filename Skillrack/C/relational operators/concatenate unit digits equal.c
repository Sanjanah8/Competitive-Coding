#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    if(abs(m)%10!=n){
        printf("%d%d",m,n);
    }else{
        printf("%d",m/10);
    }
}
