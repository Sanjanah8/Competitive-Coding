#include <stdio.h>
#include <stdlib.h>

int main() {
    int window, aisle, s;
    char choice;
    if (scanf("%d %d %c %d", &window, &aisle, &choice, &s) != 4) return 0;

    if (choice == 'w' || choice == 'W') {
        if (window >= s) {
            printf("yes");
        } else {
            printf("no");
        }
    } else if (choice == 'a' || choice == 'A') {
        if (aisle >= s) {
            printf("yes");
        } else {
            printf("no");
        }
    }

    return 0;
}
