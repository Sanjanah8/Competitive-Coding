#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;
    scanf("%c", &ch);
    for (char i = ch; i <= 'z'; i++) {
        if (!(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u')) {
            printf("%c", i);
        }
    }
    return 0;
}
