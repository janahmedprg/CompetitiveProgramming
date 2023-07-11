T = int(input())
input()
while(T):
    T-=1
    N = int(input())
    su = 0
    for i in range(N):
        su += int(input())
    if(su%N == 0):
        print("YES")
    else:
        print("NO")

    if (T == 0):
        break
    input()