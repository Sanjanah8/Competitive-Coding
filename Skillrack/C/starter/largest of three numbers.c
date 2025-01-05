#include<stdio.h>
int largest(int num1, int num2, int num3) {
    return (num1 >= num2 && num1 >= num3) ? num1 : (num2 >= num1 && num2 >= num3) ? num2 : num3;
}

void main() {
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("%d", largest(num1, num2, num3));
}

#include<stdio.h>
int largest(int num1, int num2, int num3) {
    if (num1 >= num2 && num1 >= num3) {
        return num1; 
    } else if (num2 >= num1 && num2 >= num3) {
        return num2; 
    } else {
        return num3; 
    }
}

void main() {
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("%d", largest(num1, num2, num3));
}
