# import numpy as np

t = int(input(""))
while t>0:
    n = input()
    alg = 0
    for i in range(len(n)):
        if n[i]!='0':
            alg+=1
    print(alg)
    for i in range(len(n)):
        if n[i] != '0':
            print(n[i],end='')
            print("0"*(len(n)-i-1),end="")
        print(" ",end="")

    print()

    t-=1

exit()