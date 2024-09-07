class Solution:
    def partitionString(self, s: str) -> int:
        j = 0 
        track = {}
        count = 0
        for i in range(len(s)) :
            if s[i] not in track or track[s[i]] < j :
                track[s[i]] = i
            else :
                count += 1
                j = i
                track[s[i]] = i
        return count + 1
