def alternate(s):
    words=s.split()
    result=[]
    for word in words:
        modified=''.join(word[i].upper() if i%2==0else word[i].lower() for i in range(len(word)))
        result.append(modified)
    print(' '.join(result))
s=input().strip()
alternate(s)
