n=int(input().strip())
bands=list(map(int,input().split()))
t=input().strip()
hour,minute=map(int,t.split(":"))
start=0
for i in range(n):
    end=start+bands[i]
    if minute==end and minute!=0:
        print(-1)
        break
    if start<= minute < end:
        sh,sm=hour,start
        eh,em=hour,end
        if em>=60:
            em-=60
            eh+=1
            if eh>12:
                eh=eh%12
                if eh==0:
                    eh=12
        print(i+1,f"{sh:02d}:{sm:02d}",
        f"{eh:02d}:{em:02d}")
        break
    start=end
