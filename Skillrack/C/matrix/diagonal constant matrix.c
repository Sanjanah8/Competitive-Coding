#include<stdio.h>
#include<stdlib.h>

int main()
{
int r,c;
scanf("%d %d",&r,&c);
int mat[r][c];
for(int m=0;m<r;m++){
    for(int n=0;n<c;n++){
        scanf("%d",&mat[m][n]);
        if(m>0 && n>0){
            if(mat[m][n]!=mat[m-1][n-1]){
                printf("NO");
                return 0;
            }
        }
    }
}
    printf("YES");
    return 0;
}
