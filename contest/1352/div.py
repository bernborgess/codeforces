t = int(input())
for _ in range(t):
    a,b = [int(x) for x in input().split()]
    if a%b!=0:
        print(str(b-a%b))
    else:
        print("0")