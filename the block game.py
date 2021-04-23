
for _ in range(int(input())):
    x=int(input())
    y=''.join(list(reversed(list(str(x)))))
    if x==int(y):
        print("wins")
    else:
        print("loses")