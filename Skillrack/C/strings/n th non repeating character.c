#include<stdio.h>
#include<stdlib.h>

int main()
{
char str[101];
int len,count=0,n,charcount[128]={0};;
scanf("%s",str);
len=strlen(str);
scanf("\n%d",&n);
for(int i=0;i<len;i++){
    charcount[str[i]]++;
}
for(int i=0;i<len;i++){
    if(charcount[str[i]]==1){
        count++;
        if(count==n){
            printf("%c", str[i]);
            return 0;
        }
    }
}
}
