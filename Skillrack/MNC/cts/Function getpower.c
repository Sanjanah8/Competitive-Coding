
#include <math.h>
int pow(int,int);
double getPower(int X, int Y)
{
    if (Y >= 0)
    {
        return pow(X, Y);
    }
    else
    {
        return 1.0 / pow(X, -Y);
    }
}
