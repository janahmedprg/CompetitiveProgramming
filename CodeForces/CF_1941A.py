T = int(input())

while(T):
    T-=1
    n, m, k = map(int, input().split())
    b = list(map(int, input().split()))
    c = list(map(int, input().split()))

    count = 0
    for x in b:
        for y in c:
            if(x + y <=k):
                count += 1

    print(count)

