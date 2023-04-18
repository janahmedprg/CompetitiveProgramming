T = int(input())

for t in range(T):
    n = int(input())
    arr = []
    for i in range(n):
        tmp = list(map(int, input().split(' ')))
        arr.append(sum(tmp[1:])) 
    arr.sort()
    s = 0
    ps = s
    for i in range(n):
        s +=  ps + arr[i]
        ps += arr[i]

    print(s/n)