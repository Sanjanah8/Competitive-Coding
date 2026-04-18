#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    char sound;
    if (scanf("%d", &n) != 1) return 0;
    
    for (int i = 0; i < n; i++) {
        scanf(" %c", &sound);
        if (sound == 'D') {
            printf("Bark ");
        } else if (sound == 'C') {
            printf("Meow ");
        } else if (sound == 'B') {
            printf("Cuckoo ");
        }
    }
    
    return 0;
}
