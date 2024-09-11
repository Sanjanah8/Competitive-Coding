class Solution {
public:
    int maxPathSum(vector<int> &arr1, vector<int> &arr2) {
        int i = 0, j = 0;
        int sum1 = 0, sum2 = 0; // sum1: sum for arr1, sum2: sum for arr2
        int result = 0; // To store the final maximum sum

        int m = arr1.size(), n = arr2.size();
        
        // Traverse both arrays using two pointers
        while (i < m && j < n) {
            // If arr1[i] is smaller, accumulate sum1
            if (arr1[i] < arr2[j]) {
                sum1 += arr1[i];
                i++;
            }
            // If arr2[j] is smaller, accumulate sum2
            else if (arr1[i] > arr2[j]) {
                sum2 += arr2[j];
                j++;
            }
            // If both elements are the same (common element)
            else {
                // Add the larger sum (sum1 or sum2) to the result and reset sums
                result += max(sum1, sum2) + arr1[i]; // or arr2[j], since they are equal
                sum1 = 0;
                sum2 = 0;
                i++;
                j++;
            }
        }

        // Add remaining elements of arr1 (if any)
        while (i < m) {
            sum1 += arr1[i];
            i++;
        }

        // Add remaining elements of arr2 (if any)
        while (j < n) {
            sum2 += arr2[j];
            j++;
        }

        // Add the maximum of the remaining sums to the result
        result += max(sum1, sum2);

        return result;
    }
};
