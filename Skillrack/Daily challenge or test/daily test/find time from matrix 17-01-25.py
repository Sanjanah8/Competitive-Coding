def getdigit(matrix,startcol):
    digit={
        ("111","101","101","101","111"):"0",
        ("001","001","001","001","001"):"1",
        ("111","001","111","100","111"):"2",
        ("111","001","111","001","111"):"3",
        ("101","101","111","001","001"):"4",
        ("111","100","111","001","111"):"5",
        ("111","100","111","101","111"):"6",
        ("111","001","001","001","001"):"7",
        ("111","101","111","101","111"):"8",
        ("111","101","111","001","111"):"9",
    }
    pattern = tuple(row[startcol:startcol+3]for row in matrix)
    return digit.get(pattern, "")
def main():
    matrix=[input().strip() for _ in range(5)]
    firsth=getdigit(matrix,0)
    secondh=getdigit(matrix,4)
    firstm=getdigit(matrix,10)
    secondm=getdigit(matrix,14)
    time=f"{firsth}{secondh}:{firstm}{secondm}"
    print(time)
if __name__=="__main__":
    main()
