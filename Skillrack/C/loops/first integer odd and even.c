#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,f,num;
scanf("%d %d",&n,&f);
do{
    scanf("%d",&num);
}while(f%2==num%2);
if(f%2!=0){
    printf("%d %d",f,num);
}else{
    printf("%d %d",num,f);
}return 0;
}
//first occurring odd and even integer
