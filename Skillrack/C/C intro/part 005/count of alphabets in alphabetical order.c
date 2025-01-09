#include<stdio.h>
#include<stdlib.h>

int main()
{
char str[101];
scanf("%s",str);
int i=0,alpha[256]={0};
while(str[i]!='\0'){
    alpha[str[i]]++;
    i++;
}for(i=0;i<256;i++){
    if(alpha[i]>0){
        printf("%c%d ",i,alpha[i]);
    }
}
}
