from functools import reduce

T = int(input())

while(T):
    T-=1
    n = int(input())
    count = 0
    for i in range(n):
        if(n%(i+1)!=0):
            break
        count +=1
    
    print(count)