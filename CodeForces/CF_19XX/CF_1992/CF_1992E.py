T = int(input())

def read_vector():
    return [int(num) for num in input()]

while(T):
    T-=1
    ns = input()
    c = len(ns)
    n = int(ns)
    y = 1
    res = []
    if n==1:
        print(9999)
        for i in range(2,10001):
            print(i, i-1)
    else:
        while True:
            x = int((100*ns)[:y])
            a = (x-y)//(n-c)
            b = c*a - y
            if(a>10000):
                break
            tmp = (a*ns)[:len(a*ns)-b]
            if len(tmp) == 0:
                tmp = "0"
            if int(tmp) == n*a-b and a>=1 and b>=1:
                res.append((a,b))
            y += 1
        print(len(res))
        for r in res:
            print(str(r[0])+" " + str(r[1]))