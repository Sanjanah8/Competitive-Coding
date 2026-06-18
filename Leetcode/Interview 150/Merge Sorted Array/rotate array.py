class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n=len(nums)
        k=k%n
        a=[0]*n
        for i in range(n):
            j=(i+k)%n
            a[j]=nums[i]
        for i in range(n):
            nums[i]=a[i]
        
