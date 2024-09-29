#include <stdio.h>

int main() {
    int num1, num2;

    // Accept two integers from the user
    scanf("%d %d", &num1, &num2);

    // Check if the first number is odd and the second number is even
    if (num1 % 2 != 0 && num2 % 2 == 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}
