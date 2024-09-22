//OPTIMIZED BEST SOLUTION

class Solution {
public:
    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
        int n = workerTimes.size();
        long long totalSeconds = 0;
        priority_queue<pair<long long, pair<int, int>>, vector<pair<long long, pair<int, int>>>, greater<>> pq;

        for (int i = 0; i < n; i++) {
            pq.push({workerTimes[i], {i, 1}});
        }

        while (mountainHeight > 0) {
            auto current = pq.top();
            pq.pop();
            long long currentTime = current.first;
            int workerIndex = current.second.first;
            int currentHeight = current.second.second;

            totalSeconds = max(totalSeconds, currentTime);
            mountainHeight--;

            long long nextTime = currentTime + static_cast<long long>(workerTimes[workerIndex]) * (currentHeight + 1);
            pq.push({nextTime, {workerIndex, currentHeight + 1}});
        }

        return totalSeconds;
    }
};
