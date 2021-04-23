maxi=0
p=0
for _ in range(int(input())):
    x,y=map(int,input().split())
    if x<y:
        x,y=y,x
        p=1
    else:
        p=2
    if x-y>maxi:
           maxi=x-y

print(p,maxi)