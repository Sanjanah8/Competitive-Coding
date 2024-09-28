#include <stdio.h>

int main() {
    int n;
    printf("Enter a digit: ");
    scanf("%d", &n);
    
    (n >= 0 && n <= 9) ? printf("Smallest even digit is 0\n") : printf("Please enter a valid digit\n");
    
    return 0;
}
