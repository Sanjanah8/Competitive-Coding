s1=input().strip()
s2=input().strip()
freq=[0]*26
for ch in s1:
    freq[ord(ch)-ord('a')]+=1
result=""
for ch in s2:
    while freq[ord(ch)-ord('a')]>0:
        result+=ch
        freq[ord(ch)-ord('a')]-=1
for i in range(26):
    while freq[i]>0:
        result+=chr(i+ord('a'))
        freq[i]-=1
print(result)
