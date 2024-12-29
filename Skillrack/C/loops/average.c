#include <stdio.h>

int main() {
    int total1, subjects1, total2, subjects2;
    double avg1, avg2;

    // Read input values for both students
    scanf("%d %d", &total1, &subjects1);
    scanf("%d %d", &total2, &subjects2);

    // Calculate average marks for each student
    avg1 = (double)total1 / subjects1;
    avg2 = (double)total2 / subjects2;

    // Print the maximum average with precision up to two decimal places
    if (avg1 >= avg2) {
        printf("%.2lf\n", avg1);
    } else {
        printf("%.2lf\n", avg2);
    }

    return 0;
}
