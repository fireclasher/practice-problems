max=1
a=int(input())
for i in range(1,a):
    if a%i==0 and i<=10:
        max=i
print(max)