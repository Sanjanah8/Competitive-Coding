class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        e=[]
        k=0
        for i in range(len(nums)):
            if nums[i]!=val:
                k+=1
                e.append(nums[i])
       
        for i in range(0,k):
           
            nums[i]=e[i]
            
        return k
        
