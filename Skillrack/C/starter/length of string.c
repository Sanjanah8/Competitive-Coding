#include <stdio.h>
int main()
char str[101];
int strlen;
scanf("%s %n", str, &strlen);
printf("%d", strlen); 
return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    int strlen;
    scanf("%100[^\n]", str);
    strlen = (int)strlen(str);
    printf("%d", strlen);
    return 0;
}
