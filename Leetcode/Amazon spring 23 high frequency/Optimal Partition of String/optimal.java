class Solution {
    public int partitionString(String s) {
        //HashSet<Character> hs=new HashSet<>();//temp
        int freq[]=new int[26];
        int count=0;

        for(int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i);
            if(freq[ch-'a']==1)
            {
                count++;
                Arrays.fill(freq,0);
            }
            freq[ch-'a']=1;
        }
        return count+1;
    }
}
