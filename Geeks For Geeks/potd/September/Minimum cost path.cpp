class Solution {
public:
    // Directions for moving up, down, left, right
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    // Function to return the minimum cost to reach the bottom right cell from the top left cell.
    int minimumCostPath(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> dist(n, vector<int>(n, INT_MAX));
        
        // Min-heap priority queue, stores {cost, {row, col}}
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

        // Initialize with the starting point
        pq.push({grid[0][0], {0, 0}});
        dist[0][0] = grid[0][0];

        while (!pq.empty()) {
            auto node = pq.top();
            pq.pop();
            
            int cost = node.first;
            int x = node.second.first;
            int y = node.second.second;

            // If we reached the bottom-right corner, return the accumulated cost
            if (x == n - 1 && y == n - 1) {
                return cost;
            }

            // Explore neighbors
            for (int i = 0; i < 4; i++) {
                int newX = x + dx[i];
                int newY = y + dy[i];

                // Check if the new position is within the grid
                if (newX >= 0 && newY >= 0 && newX < n && newY < n) {
                    int newCost = cost + grid[newX][newY];

                    // If a cheaper cost is found, update and push to the priority queue
                    if (newCost < dist[newX][newY]) {
                        dist[newX][newY] = newCost;
                        pq.push({newCost, {newX, newY}});
                    }
                }
            }
        }

        // Return the distance to the bottom-right corner
        return dist[n-1][n-1];
    }
};
