import sys
def solve():
    s=sys.stdin.read().strip()
    if not s:
        return
    result=[]
    i=0
    n=len(s)
    while i<n:
        if i+2<n and s[i+2]=='#':
            val=int(s[i:i+2])
            result.append(chr(96+val))
            i+=3
        else:
            val=int(s[i])
            result.append(chr(96+val))
            i+=1
    print("".join(result))
if __name__=='__main__':
    solve()
