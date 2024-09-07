class Solution {
    fun kthFactor(N: Int, K: Int): Int {
        var found = 0
        for (i in 1..N)
            if (N % i == 0 && ++found == K)
                return i
        return -1
    }
}
