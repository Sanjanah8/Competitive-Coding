#include<stdio.h>
#include<stdlib.h>

int main()
{
char x,y,z;
scanf("%c %c %c",&x,&y,&z);
if((x-'a'+1)%2!=0&&(y-'a'+1)%2==0&&(z-'a'+1)%2!=0){
    printf("YES");
}else{
    printf("NO");
}return 0;
}
