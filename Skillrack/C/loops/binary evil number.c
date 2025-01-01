#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,binary=0;
scanf("%d",&n);
while(n>0){
    binary+=(n%2);
    n/=2;
}printf((binary%2==0)?"Yes":"No");
return 0;
}
