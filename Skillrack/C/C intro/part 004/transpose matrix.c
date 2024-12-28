#include<stdio.h>
#include<stdlib.h>

int main()
{
int r,c,row,col;
scanf("%d %d",&r,&c);
int mat[r][c];
for(row=0;row<r;row++){
    for(col=0;col<c;col++)
{
    scanf("%d",&mat[row][col]);
}}
for(col=0;col<c;col++){
    for(row=0;row<r;row++){
        printf("%d ",mat[row][col]);
}printf("\n");
}return 0;
}
