#include<stdio.h>

void main() {
    int x;
    int *ptr; 
    scanf("%d", &x);
    ptr = &x;
    printf("%d", *ptr);
}
