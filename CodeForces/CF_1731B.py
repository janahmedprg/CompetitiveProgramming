T = int(input())

while(T):
    T-=1
    x = int(input())
    print(((x*(x+1)*(4*x-1))*337)%(1000000000+7))
