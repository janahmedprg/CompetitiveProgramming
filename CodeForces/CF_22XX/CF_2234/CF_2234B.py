T = int(input())

def read_vector():
    return [int(num) for num in input()]

while(T):
    T-=1
    n = int(input())

    a = n % 12
    if a == 10:
        a = 22
    b = n - a

    if b < 0:
        print(-1)
    else:
        print(a,b)