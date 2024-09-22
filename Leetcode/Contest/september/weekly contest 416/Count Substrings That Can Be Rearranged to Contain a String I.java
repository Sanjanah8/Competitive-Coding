class Solution {
    public long validSubstringCount(String word1, String word2) {
        int m = word2.length();
        int n = word1.length();
        if (m > n) return 0;

        int[] word2Count = new int[26];
        for (char c : word2.toCharArray()) {
            word2Count[c - 'a']++;
        }

        long validCount = 0;
        int[] windowCount = new int[26];
        int left = 0;

        for (int right = 0; right < n; right++) {
            windowCount[word1.charAt(right) - 'a']++;

            while (matches(windowCount, word2Count)) {
                validCount += (n - right); // Count all valid substrings ending at 'right'
                windowCount[word1.charAt(left) - 'a']--;
                left++;
            }
        }

        return validCount;
    }

    private boolean matches(int[] windowCount, int[] word2Count) {
        for (int i = 0; i < 26; i++) {
            if (windowCount[i] < word2Count[i]) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Solution solution = new Solution();
        System.out.println(solution.validSubstringCount("bcca", "abc"));
        System.out.println(solution.validSubstringCount("abcabc", "abc")); 
        System.out.println(solution.validSubstringCount("abcabc", "aaabc")); 
    }
}
