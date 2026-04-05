s=input().strip()
distinct_chars=set(s)
required=len(distinct_chars)
left=0
min_len=len(s)
freq={}
formed=0
for right in range(len(s)):
    char=s[right]
    freq[char]=freq.get(char,0)+1
    if freq[char]==1:
        formed+=1
    while formed==required:
        min_len=min(min_len,right-left+1)
        freq[s[left]]-=1
        if freq[s[left]]==0:
            formed-=1
        left+=1
print(min_len)
