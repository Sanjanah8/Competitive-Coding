#include <stdio.h>

int main() {
    int a, b; // Declare two integer variables

    // Accept input for two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b); // Read integers from user input

    // Check if either integer is even
    if (a % 2 == 0 || b % 2 == 0) {
        printf("yes\n"); // Print "yes" if any integer is even
    } else {
        printf("no\n"); // Print "no" if neither integer is even
    }

    return 0; // Indicate successful completion
}
