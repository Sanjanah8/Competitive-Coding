#include<stdio.h>
#include<stdlib.h>
int ismatchfound(char s1[],char s2[],int s1i,int s2i){
    while(s1[s1i]!='\0'){
    if(s1[s1i]!=s2[s2i]){
        return 0;
    }s1i++;
    s2i++;
}return 1;
    
}
int main()
{
char s1[101],s2[101];
scanf("%s %s",s1,s2);
int s1i=strlen(s1),s2i=0,s1starti=0;
while(s1i>=0){
    if(ismatchfound(s1,s2,s1i,s2i)==1){
        s1starti=s1i;
    }s1i--;
}printf("%s",&s1[s1starti]);
}
