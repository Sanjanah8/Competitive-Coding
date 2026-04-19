#include <stdio.h>
#include <ctype.h>

char getNextConsonant(char ch)
{
    char next = ch;
    
    while (1)
    {
        if (next == 'z') next = 'a';
        else if (next == 'Z') next = 'A';
        else next++;
        char lower = tolower(next);
        if (!(lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u'))
        {
            return next;
        }
    }
}
