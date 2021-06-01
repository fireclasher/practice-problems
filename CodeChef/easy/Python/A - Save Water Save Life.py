for _ in range(int(input())):
    H,y,x,c= map(int,input().split())
    if H*((x//2)+y)<=c:
        print("YES")
    else:
        print("NO")