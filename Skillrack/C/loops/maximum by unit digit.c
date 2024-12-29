

#include <stdio.h> 
#include <stdlib.h> 
int main() { int N1,N2; 
            scanf("%d %d",&N1,&N2); 
            if((N1%10)<(N2%10)) { 
              printf("%d",N1); } 
            else { printf("%d",N2); } 
            return 0; }
