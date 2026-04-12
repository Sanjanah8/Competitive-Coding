#include <stdio.h>
#include <string.h>

void reverseSecondHalf(char str[]) {
    int len = strlen(str);
    int start = len / 2;
    int end = len - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[101];
    scanf("%s", str);
    reverseSecondHalf(str);
    printf("%s", str);
    return 0;
}
