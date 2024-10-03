#include<stdio.h>
int main()
{
int n;
while(1){
    scanf("%d",&n);
    if(n==0){
        break;
    }
    printf("%d ", n);
}
return 0;
}

2)
  
#include <stdio.h>
int main() {
    int n;
    printf("Enter integers (0 to exit):\n");
    while (1) {
        if (scanf("%d", &n) != 1) { 
            printf("Invalid input. Please enter an integer.\n");
            while (getchar() != '\n');
            continue; 
        }
        if (n == 0) {
            break; 
        }
        printf("%d ", n);
    }
    printf("\nProgram exited.\n"); 
    return 0;
}

3)
  
#include <stdio.h>

int main() {
    int n;
    int count = 0; // To track the number of inputs
    const int maxInputs = 100; // Define a maximum limit for inputs
    
    printf("Enter integers (0 to exit):\n");
    
    while (count < maxInputs) {
        if (scanf("%d", &n) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            // Clear the invalid input from the buffer
            while (getchar() != '\n');
            continue; // Skip the rest of the loop and prompt again
        }
        
        if (n == 0) {
            break; // Exit the loop if the input is 0
        }
        
        printf("%d ", n); // Print the entered number
        count++; // Increment the count of valid inputs
    }
    
    printf("\nProgram exited after %d inputs.\n", count);
    return 0;
}

