#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d",&n);
int last=n%10,first;
for(;n>9;n/=10);
first=n;
if(first==last){
    printf("YES");
}
else{
    printf("NO");
}
return 0;
}
