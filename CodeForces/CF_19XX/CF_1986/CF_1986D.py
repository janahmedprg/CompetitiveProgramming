T = int(input())

while(T):
    T-=1
    n = int(input())
    s = input()
    if (n == 2):
        print(int(s))
        continue
    if (n == 3 and s[1] != '0' and s.count('0') == 1):
        print(0)
        continue
    if (n == 3 and s.count('0') == 1):
        print(min(int(s[0])+ int(s[2]),int(s[0])*int(s[2])))
        continue
    if (s.count('0') >= 1):
        print(0)
        continue
    idx = 0
    c = 100000000
    for i in range(n-1):
        tmp = int(s[i]+s[i+1])
        idx = i

        for i in range(n):
            if (int(s[i]) != 1 and i != idx and i != idx+1):
                tmp += int(s[i])
        c = min(c, tmp)
            
    print(c)