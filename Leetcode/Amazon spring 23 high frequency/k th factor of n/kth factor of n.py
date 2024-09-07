class Solution:
    def kthFactor(self, n: int, k: int) -> int:
        factor = []
        i=1
        while i*i<=n:
            if n%i==0:
                factor.append(i)
                if i!=n//i:
                    factor.append(n//i)
            i+=1
        factor.sort()
        if k<=len(factor):
            return factor[k-1]
        return -1
