s=input().strip()
lines=s.split("\\n")
level_map={}
file_found=False
for line in lines:
    level=0
    while line.startswith("\\t"):
        level+=1
        line=line[2:]
    level_map[level]=line
    if "." in line:
        file_found=True
        path=[]
        for i in range(level+1):
            path.append(level_map[i])
        print("\\".join(path))
if not file_found:
    print(-1)
