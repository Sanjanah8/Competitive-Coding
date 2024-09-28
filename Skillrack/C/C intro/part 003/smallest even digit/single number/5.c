#include <stdio.h>

int main() {
    int n;
    printf("Enter a digit: ");
    scanf("%d", &n);
    
    if (n >= 0 && n <= 9) {
        printf("Smallest even digit is 0\n");
    } else {
        printf("Please enter a valid single digit\n");
    }
    
    return 0;
}
