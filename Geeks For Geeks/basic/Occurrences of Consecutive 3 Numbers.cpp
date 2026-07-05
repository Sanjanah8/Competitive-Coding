class Solution {
public:
    int specialIntegers(int n, vector<int> &arr) {
        unordered_set<int> elements(arr.begin(), arr.end());
        int count = 0;
        for (int x : elements) {
            if (elements.count(x - 1) && elements.count(x + 1)) {
                count++;
            }
        }
        
        return count;
    }
};

//other
class Solution {
public:
    int specialIntegers(int n, vector<int> &arr) {
        unordered_set<int> uniqueNumbers;
        for (int num : arr) {
            uniqueNumbers.insert(num);
        }
        
        int specialIntegerCount = 0;
        
        for (int currentNum : uniqueNumbers) {
            int smallerNeighbor = currentNum - 1;
            int largerNeighbor = currentNum + 1;
            
            bool hasSmaller = uniqueNumbers.count(smallerNeighbor) > 0;
            bool hasLarger = uniqueNumbers.count(largerNeighbor) > 0;
            
            if (hasSmaller && hasLarger) {
                specialIntegerCount++;
            }
        }
        
        return specialIntegerCount;
    }
};
