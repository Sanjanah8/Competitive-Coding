#include<stdio.h>
#include<stdlib.h>

int main()
{
int s;
scanf("%d",&s);
int a[s][s],b[s][s],sum[s][s];
for(int i=0;i<s;i++){
    for(int j=0;j<s;j++){
        scanf("%d",&a[i][j]);
    }
}for(int i=0;i<s;i++){
    for(int j=0;j<s;j++){
        scanf("%d",&b[i][j]);
    }
}for(int i=0;i<s;i++){
    for(int j=0;j<s;j++){
        sum[i][j]=a[i][j]+b[i][j];
    }
}for(int i=0;i<s;i++){
    for(int j=0;j<s;j++){
        printf("%d ",sum[i][j]);
    }
    printf("\n");
}
}
