s=input().strip()
k=int(input())
words=s.split()
current_len=0
possible=True
for i,word in enumerate(words):
    wlen=len(word)
    if wlen > k:
        possible=False
        break
    if current_len==0:
        current_len=wlen
    else:
        if current_len+1+wlen<=k:
            current_len+=1+wlen
        else:
            if current_len+1+wlen<=k:
                current_len+=1+wlen
            else:
                if current_len!=k and current_len!=k-1:
                    possible=False
                    break
                current_len=wlen
if current_len>k:
    possible=False
print("YES" if possible else "NO")
