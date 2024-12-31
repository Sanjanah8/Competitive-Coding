#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,len;
scanf("%d",&n);
char str[101];
for(int i=1;i<=n;i++){
    scanf("%s",str);
    len=strlen(str);
    if(len%2!=0){
        printf("%c\n",str[len/2]);
    }else{
        printf("%c%c\n",str[len/2-1],str[len/2]);
    }
}return 0;
}
