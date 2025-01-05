#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[1001];
    scanf("%s", str);

    int len = strlen(str);
    if (len > 2) {
        str[len - 1] = '\0'; 
        printf("%s", str + 1,strlen(str)-1);
    }
}
