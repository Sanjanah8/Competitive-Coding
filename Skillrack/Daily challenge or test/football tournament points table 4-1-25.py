def processfootball():
    n=int(input())
    teams={}
    for _ in range(n):
        match=input().split()
        t1,g1,_,g2,t2=match[0],int(match[1]),match[2],int(match[3]),match[4]
        if t1 not in teams:
            teams[t1]=[0,0]
        if t2 not in teams:
            teams[t2]=[0,0]
        teams[t1][1]+=g1
        teams[t2][1]+=g2
        
        if g1>g2:
            teams[t1][0]+=2
        elif g1<g2:
            teams[t2][0]+=2
        else:
            teams[t1][0]+=1
            teams[t2][0]+=1
    sorted_teams=sorted(teams.items(),key=lambda x:(-x[1][0],-x[1][1],x[0]))
    for team,stats in sorted_teams:
        print(team,stats[0],stats[1])
processfootball()
