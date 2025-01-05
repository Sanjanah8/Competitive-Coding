
x,y=map(int,input().split())
n=int(input())
print(int((x/y)*(10**n))%10)

"""
#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y,n;
scanf("%d %d",&x,&y);
scanf("%d",&n);
printf("%d",((x/y)*pow(10,n))%10);
"""
