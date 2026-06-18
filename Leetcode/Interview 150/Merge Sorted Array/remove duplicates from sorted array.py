class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        k=1
        a=[]
        a.append(nums[0])
        for i in range(1,len(nums)):
            if nums[i]!=nums[i-1]:
                k+=1
                a.append(nums[i])
        for i in range(k):
            nums[i]=a[i]
        return k
