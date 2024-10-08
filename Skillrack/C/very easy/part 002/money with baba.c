#include<stdio.h>
#include<stdlib.h>

int main()
{
int amount,beggar;
scanf("%d%d",&amount,&beggar);
int initial=amount;
int count=1;
while(count<=beggar){
    initial=initial*2;
    count++;
}
printf("%d",initial);
}
