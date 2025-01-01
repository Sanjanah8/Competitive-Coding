#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int num[N];
    for(int ctr = 0; ctr <N; ctr++)
    {
        scanf("%d",&num[ctr]);
        
    }
        for(int ctr=0;ctr<N;ctr++){
        if(num[ctr]==10){
            break;
        }
        printf("%d ",num[ctr]);
    }
    return 0;
}
