int X;
cin >> X;

int *ptr1 = &X;          // ptr1 points to X
int **ptr2 = &ptr1;      // ptr2 points to ptr1
int ***ptr3 = &ptr2;     // ptr3 points to ptr2
int ****ptr4 = &ptr3;    // ptr4 points to ptr3

cout << ****ptr4;        // Dereferencing 4 times prints the value of X
