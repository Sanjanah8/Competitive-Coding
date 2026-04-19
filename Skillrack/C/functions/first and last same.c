#include <string.h>

int areFirstAndLastSame(char *S)
{
    int len = strlen(S);
  
    if (len == 0)
    {
        return 0;
    }
  
    if (S[0] == S[len - 1])
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
