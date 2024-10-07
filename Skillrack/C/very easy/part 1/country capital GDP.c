#include<stdio.h>
#include<stdlib.h>

int main()
{
char country[100];
char capital[100];
double GDP;
scanf("%s",country);
scanf("%s",capital);
scanf("%lf",&GDP);
printf("The capital of %s is %s and it's GDP is %.2lf",country,capital,GDP);
}
