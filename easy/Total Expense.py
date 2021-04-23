for _ in range(int(input())):
    x,y=map(float,input().split())
    if x>1000:
        print("%.6f"%(x*y-(x*y*0.1)))
    else:
        print("%.6f"%(x*y))