#include<stdio.h>
#include<stdlib.h>
int isVowel(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        return 1;
    }else{
        return 0;
    }
}
int main()
{
char str[1001],ch,count=0;
scanf("%[^\n]",str);
int len,i;
len=strlen(str);
for(i=0;i<len;i++){
    ch=tolower(str[i]);
    if(isVowel(ch)){
        count++;
    }
}printf("%d",count);
}
