#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,total=0;
char ch;
scanf("%d\n",&n);
for(int i=1;i<=n;i++){
    scanf("%c",&ch);
    if(i!=n){
        scanf(" ");
    }if(ch=='R'){
        total+=2;
    }else{
        total--;
    }
}printf("%d",total);
return 0;
}
