T = int(input())

while(T):
    T-=1
    n = int(input())
    ma = int(int(n*"9")**(1/2))
    mi = int(int("1"+(n-1)*"0")**(1/2))
    di = {}
    if(n == 1):
        print(1)
    for i in range(mi,ma+1):
        s = str(i**2)
        ts = s
        s = ''.join(sorted(s))
        if s in di:
            di[s].append(ts)
            if len(di[s]) == n:
                for j in range(0,len(di[s])):
                    print(di[s][j])
                break
        else:
            di[s] = [ts]
        