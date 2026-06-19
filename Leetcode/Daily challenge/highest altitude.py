class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        alt=0
        maxalt=0
        for i in range(len(gain)):
            alt+=gain[i]
            maxalt=max(alt,maxalt)
        return maxalt
        
