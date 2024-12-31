#include<stdio.h>
#include<stdlib.h>

int main()
{
char str[101];
scanf("%s",str);
int alphacount[26]={0},count;
for(int i=0;str[i]!='\0';i++){
    alphacount[str[i]-'a']++;
}count=alphacount[str[0]-'a'];
for(int i=0;i<26;i++){
    if(alphacount[i]>0&&count!=alphacount[i]){
        printf("NO");
        return 0;
    }
}printf("YES");
return 0;
}
