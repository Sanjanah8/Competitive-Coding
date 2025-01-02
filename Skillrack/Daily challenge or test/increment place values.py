def placevalue(num,pos):
    num_str=str(num)
    length=len(num_str)
    pos=((pos-1)%length)+1
    return 10**(length-pos)
def getdigit(num,pos):
    num_str=str(num)
    length=len(num_str)
    pos=((pos-1)%length)+1
    i=len-pos
    return int(num_str[i])
def modify(N,T,K):
    result=N
    for counter in range(1,T+1):
        position=K*counter
        place=placevalue(result,position)
        result+=place
    return result
N=int(input())
T,K=map(int,input().split())
result=modify(N,T,K)
print(result)
