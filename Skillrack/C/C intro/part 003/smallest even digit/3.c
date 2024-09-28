#include <stdio.h>
#include <string.h>

int main() {
    char number[20];
    int smallest_even = 10;
    
    printf("Enter an integer: ");
    scanf("%s", number);  // Input as string

    for (int i = 0; i < strlen(number); i++) {
        int digit = number[i] - '0';  // Convert character to integer
        if (digit % 2 == 0 && digit < smallest_even) {
            smallest_even = digit;
        }
    }

    if (smallest_even == 10) {
        printf("No even digit found\n");
    } else {
        printf("Smallest even digit is %d\n", smallest_even);
    }

    return 0;
}
