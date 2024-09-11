
class Solution {
    // Function to return the minimum cost of connecting the ropes.
    public long minCost(long[] arr) {
        // Create a min-heap (PriorityQueue) to store the ropes.
        PriorityQueue<Long> minHeap = new PriorityQueue<>();
        
        // Add all elements to the min-heap.
        for (long rope : arr) {
            minHeap.add(rope);
        }
        
        long totalCost = 0;
        
        // While there is more than one rope in the heap.
        while (minHeap.size() > 1) {
            // Extract the two smallest ropes.
            long first = minHeap.poll();
            long second = minHeap.poll();
            
            // The cost to connect them.
            long cost = first + second;
            
            // Add the cost to the total cost.
            totalCost += cost;
            
            // Insert the resulting rope back into the heap.
            minHeap.add(cost);
        }
        
        // Return the total cost of connecting the ropes.
        return totalCost;
    }

    public static void main(String[] args) {
        Solution sol = new Solution();
        long[] arr1 = {4, 3, 2, 6};
        long[] arr2 = {4, 2, 7, 6, 9};
        
        System.out.println(sol.minCost(arr1));  
        System.out.println(sol.minCost(arr2));  
    }
}
