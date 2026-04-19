#include <stdio.h>

double getPriceAfterDiscount(int price, int discountPercentage)
{
    double discountAmount = (price * (double)discountPercentage) / 100.0;
    double finalPrice = price - discountAmount;
    
    return finalPrice;
}
