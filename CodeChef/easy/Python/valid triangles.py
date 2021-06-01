for _ in range(int(input())):
    x,y=map(int,input().split())
    if x<y:
        x,y=y,x
    print(x,x+y)