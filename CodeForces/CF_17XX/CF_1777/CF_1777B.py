import math

T = int(input())
while T:
    T-=1
    n = int(input())
    if n==1:
        print(0)
        continue
    if n == 2:
        print(4)
        continue
    
    f=math.factorial(n)%1000000007
    ret = f*(n-1)*n
    print(int(ret%1000000007))
