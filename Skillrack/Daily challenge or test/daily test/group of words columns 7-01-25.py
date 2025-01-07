def groupwords(s):
    words=s.split()
    
    groupedwords={}
    for word in words:
        startchar=word[0]
        if startchar not in groupedwords:
            groupedwords[startchar]=[]
        groupedwords[startchar].append(word)
    sortedgroups=sorted(groupedwords.items())
    maxgroupsize=max(len(group)for _,group in sortedgroups)
    
    result=[]
    for i in range(maxgroupsize):
        row=[]
        for _, group in sortedgroups:
            if i<len(group):
                row.append(group[i])
            else:
                row.append("*"* len(words[0]))
        result.append("".join(row))
    for line in result:
        print(line)
s=input().strip()
groupwords(s)
