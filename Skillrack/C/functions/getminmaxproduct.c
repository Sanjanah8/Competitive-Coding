int getMinMaxProduct(int n1, int n2, int n3)
{
    int min = n1;
    int max = n1;
    if (n2 < min) min = n2;
    if (n3 < min) min = n3;

    if (n2 > max) max = n2;
    if (n3 > max) max = n3;

    return min * max;
}
