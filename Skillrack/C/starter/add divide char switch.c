#include<stdio.h>
#include<ctype.h>

int main() {
    int X, Y;
    char CH;

    scanf("%d %d %c", &X, &Y, &CH);  // Read X, Y, and character CH

    CH = toupper(CH);  // Convert the character to uppercase

    switch(CH) {
        case 'M':
            printf("%d", X * Y);  // If 'M', print the product of X and Y
            break;
        default:
            printf("%d", X / Y);  // For any other character, print the result of X divided by Y
            break;
    }

    return 0;
}
