class Solution {
  public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
            long long sum=0;
            for(int i=0;i<car.size();i++){
                     if(date%2==0){
                        if(car[i]%2==1){
                        sum+=fine[i];
                            
                        }
                }
                else{
                    if(car[i]%2==0){
                        sum+=fine[i];
                    }
                }
            }
        return sum;
    }
};

//shorter code 
class Solution {
  public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
        long long sum = 0;
        int n = car.size();
        
        // Determine the target parity for cars we want to fine
        // If date is even (0), we want odd cars (1)
        // If date is odd (1), we want even cars (0)
        int target_car_parity = (date % 2 == 0) ? 1 : 0;
        
        for (int i = 0; i < n; i++) {
            if (car[i] % 2 == target_car_parity) {
                sum += fine[i];
            }
        }
        
        return sum;
    }
};
