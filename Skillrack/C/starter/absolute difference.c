#include <stdio.h>
#include <stdlib.h> // For abs() function

int main() {
    int a, b; // Declare two integer variables

    // Accept input for two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b); // Read integers from user input

    // Print the absolute difference
    printf("Absolute difference: %d\n", abs(a - b)); // Calculate and print absolute difference

    return 0; // Indicate successful completion
}
