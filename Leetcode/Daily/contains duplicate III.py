class Solution:
    def containsNearbyAlmostDuplicate(self, nums: List[int], indexDiff: int, valueDiff: int) -> bool:
        if len(nums)==len(set(nums)):
            return False
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                if nums[i]==nums[j]:
                    if abs(i-j)<=indexDiff and abs(nums[i]-nums[j])<=valueDiff:
                        return True
        return False
