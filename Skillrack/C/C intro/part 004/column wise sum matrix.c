#include<stdio.h>
#include<stdlib.h>

int main()
{
int r,c,row,col;
scanf("%d %d",&r,&c);
int matrix[r][c];
for(row=0;row<r;row++){
    for(col=0;col<c;col++){
        scanf("%d",&matrix[row][col]);
    }
}
for(col=0;col<c;col++){
    int sum=0;
    for(row=0;row<r;row++){
        sum+=matrix[row][col];
    }
    printf("%d ",sum);
}
return 0;
}
