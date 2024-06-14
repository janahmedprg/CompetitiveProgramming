T = int(input())

def count(k):
    return k*(k+1)//2


while(T):
    T-=1
    k,x = [int(i) for i in input().split()]

    L=1
    R=2*k -1
    target = x
    ret = R
    mid = 0
    while L <= R:
        mid = L + (R - L)//2
        if mid <=k:
            ret = count(mid)
        else:
            ret = count(k)+ count(k-1) - count(2*k-mid-1)
        if ret < target:
            L = mid + 1 
        else:
            R = mid - 1 
            if(ret == target):
                mid += 1
                break
    
    print(mid)

