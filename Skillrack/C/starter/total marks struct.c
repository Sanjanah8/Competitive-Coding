#include<stdio.h>

// Define a structure to store student marks
struct studentmarks {
    int sub1_mark;  // Marks for subject 1
    int sub2_mark;  // Marks for subject 2
    int sub3_mark;  // Marks for subject 3
};

int main() {
    // Declare a variable of type struct studentmarks
    struct studentmarks marks;

    // Input the marks for the three subjects
    printf("Enter marks for three subjects: ");
    scanf("%d %d %d", &marks.sub1_mark, &marks.sub2_mark, &marks.sub3_mark);

    // Calculate and print the total marks
    printf("Total Marks: %d", marks.sub1_mark + marks.sub2_mark + marks.sub3_mark);

    return 0;
}
