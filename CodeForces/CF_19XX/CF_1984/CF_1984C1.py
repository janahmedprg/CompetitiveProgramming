T = int(input())

def solve(c):
    if c < 0:
        return -1000000000
    if c == 0:
        return 0
    
    return max()

while(T):
    T-=1
    c = 0
    n = int(input())
    a = [int(x) for x in input().split()]
    dp = (len(a)+1)*[0]
    for i in range(len(a)):
        dp[i+1] = dp[i] + a[i]

    for i in range(len(a)):
        dp[i + 1] = max(abs(dp[i]), abs(dp[i] + a[i]))

    print(dp)
