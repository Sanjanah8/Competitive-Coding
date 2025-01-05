#include<stdio.h>
#include<stdlib.h>

int min(int num1, int num2) {
    return (num1 < num2) ? num1 : num2;  // Function to return the minimum of two numbers
}

int main() {
    int num1, num2;

    scanf("%d%d", &num1, &num2);

    printf("%d", min(num1, num2));

    return 0;
}
