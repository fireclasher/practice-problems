for _ in range(int(input())):
    x,y,z=map(int,input().split())
    if x==y+z or y==x+z or z==x+y:
        print("yes")
    else:
        print("No")