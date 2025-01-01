#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,i=0;
scanf("%d",&x);
int d=0,j=1;
while(d<x){
    d+=j;
    j+=9;
    i++;
}printf("%d",i);
}
//Ravi needs to go home from the office. The distance X is passed as the input to the program. He travels 1 meter in his first jump, 
//10 meters in his second jump, 19 meters in his third jump, 28 meters in his fourth jump, 37 meters in his fifth jump and so on. The program must print the step in which he reaches his home as the output.
