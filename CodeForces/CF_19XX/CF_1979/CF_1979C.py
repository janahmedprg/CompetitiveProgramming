import math
from functools import reduce
T = int(input())

def read_vector():
    return [int(num) for num in input().split()]

while(T):
    T-=1
    n = int(input())
    ks = read_vector()
    commonDen = 1
    for k in ks:
        tmp = commonDen
        commonDen *= k
        commonDen /= math.gcd(int(tmp), k)
    num = 0
    coins = []
    for k in ks:
        num += commonDen/k
        coins.append(commonDen/k)
    coins = [int(coini) for coini in coins]
    
    if num<commonDen:
        print(*coins, sep=' ')
    else:
        print(-1)