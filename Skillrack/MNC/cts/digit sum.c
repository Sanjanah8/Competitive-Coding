void printDigitSum(int *arr, int LENGTH)
{
    for(int i=0;i<LENGTH;i++){
        int num=arr[i];
        int sum=0;
        if(num<0){
            num=-num;
        }
        while(num!=0){
            sum+=num%10;
            num/=10;
        }
        if(i<LENGTH-1){
            printf("%d,",sum);
        }
        else{
            printf("%d",sum);
        }
    }
}
