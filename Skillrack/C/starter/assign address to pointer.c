#include<stdio.h>

void main() {
    int x, y, z;
    int *ptr1, *ptr2, *ptr3;

    // Reading values for x, y, z
    scanf("%d %d %d", &x, &y, &z);

    // Assigning the addresses of x, y, z to the pointers
    ptr1 = &x;
    ptr2 = &y;
    ptr3 = &z;

    // Printing the values pointed to by ptr1, ptr2, and ptr3
    printf("%d %d %d", *ptr1, *ptr2, *ptr3);
}
