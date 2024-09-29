//must print numbers till 50

#include<stdio.h>
#include<stdlib.h>

int main()
{
int ctr=1;
while(1){
    if(ctr==50){
        break;
    }
    printf("%d",ctr++);
}
return 0;
}
