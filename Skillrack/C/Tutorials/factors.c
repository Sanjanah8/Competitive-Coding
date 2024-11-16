#include <stdio.h>

int main()
{

    int inputNumber;
    scanf("%d",&inputNumber);
    int factorsCount=0;

    int counter=1;
    for(; counter <= inputNumber; counter++)
    {
        if(inputNumber%counter==0){
            factorsCount++;
        }

    }
    printf("%d",factorsCount);
    return 0;
}
