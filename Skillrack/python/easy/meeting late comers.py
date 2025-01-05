from datetime import datetime
arrival_time=input().split()
meetingtime=datetime.strptime('10:00','%H:%M')
latecount=sum(1 for time_str in arrival_time if datetime.strptime(time_str,'%H:%M')>meetingtime)
print(latecount)
