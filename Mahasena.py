eve=0
odd=0
n=int(input())
x=list(map(int,input().split()))
for i in x:
    if i%2==0:
        eve+=1
    else:
        odd+=1
if eve>odd:
    print("READY FOR BATTLE")
else:
    print("NOT READY")
