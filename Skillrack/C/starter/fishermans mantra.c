#include<stdio.h>
#include<stdlib.h>

int main()
{
int f,n;
scanf("%d %d",&f,&n);
printf("%d",f*pow(2,n));
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
int f,n;
long long final;
scanf("%d %d",&f,&n);
final=f;
for(int i=0;i<n;i++){
    final*=2;
}
printf("%lld",final);
}
