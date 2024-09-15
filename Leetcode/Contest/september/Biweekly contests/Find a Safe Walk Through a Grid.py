class Solution:
    def findSafeWalk(self, grid: List[List[int]], health: int) -> bool:
        m, n = len(grid), len(grid[0])
        directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
        queue = deque([(0, 0, health)])
        visited = set()
        visited.add((0, 0, health))
        while queue:
            x, y, current_health = queue.popleft()
            if x == m - 1 and y == n - 1 and current_health > 0:
                return True
            for dx, dy in directions:
                new_x, new_y = x + dx, y + dy
                if 0 <= new_x < m and 0 <= new_y < n:
                    new_health = current_health - grid[new_x][new_y]
                    if new_health > 0 and (new_x, new_y, new_health) not in visited:
                        visited.add((new_x, new_y, new_health))
                        queue.append((new_x, new_y, new_health))
        return False
