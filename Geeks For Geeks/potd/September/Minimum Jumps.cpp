class Solution {

public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();

        // If the array has only one element, no jump is needed
        if (n == 1) {
            return 0;
        }

        // If the first element is 0, we can't move anywhere
        if (arr[0] == 0) {
            return -1;
        }

        int jumps = 0;          // Number of jumps needed
        int farthest = 0;       // Farthest point we can reach at any point
        int current_end = 0;    // End of the current jump range

        for (int i = 0; i < n - 1; ++i) {
            // Update farthest reachable position from index `i`
            farthest = max(farthest, i + arr[i]);

            // If we've reached the current jump's end
            if (i == current_end) {
                jumps++;
                current_end = farthest;

                // If we can reach or exceed the last element, return the jumps
                if (current_end >= n - 1) {
                    return jumps;
                }
                
            }
            
        }
        return -1;
    }  
};
    
              
