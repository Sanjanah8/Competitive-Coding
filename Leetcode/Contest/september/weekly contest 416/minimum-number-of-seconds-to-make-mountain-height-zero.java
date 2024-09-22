import java.util.PriorityQueue;

class Solution {
    public long minNumberOfSeconds(int mountainHeight, int[] workerTimes) {
        long totalSeconds = 0;
        int n = workerTimes.length;

        PriorityQueue<long[]> pq = new PriorityQueue<>((a, b) -> Long.compare(a[0], b[0]));
        
        for (int i = 0; i < n; i++) {
            pq.offer(new long[]{workerTimes[i], 1, i}); 
        }

        while (mountainHeight > 0) {
            long[] current = pq.poll();
            long currentTime = current[0];
            int currentHeight = (int) current[1];
            int workerIndex = (int) current[2];

            totalSeconds = Math.max(totalSeconds, currentTime);
            mountainHeight--;

            pq.offer(new long[]{currentTime + workerTimes[workerIndex] * (currentHeight + 1), currentHeight + 1, workerIndex});
        }

        return totalSeconds;
    }

    public static void main(String[] args) {
        Solution solution = new Solution();
        System.out.println(solution.minNumberOfSeconds(4, new int[]{2, 1, 1})); 
        System.out.println(solution.minNumberOfSeconds(10, new int[]{3, 2, 2, 4})); 
        System.out.println(solution.minNumberOfSeconds(5, new int[]{1}));
    }
}

