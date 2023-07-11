T = int(input())

while(T):
    T-=1
    c = input()
    N = int(input())
    arr = input()
    arr = arr.replace("[","")
    arr = arr.replace("]","")
    arr = arr.split(',')
    flag = True
    nD = 0
    nR = 0
    for i in range(len(c)):
        if c[i] == 'R':
            nR+=1
        elif c[i] == 'D':
            if len(arr) == nD or arr[0] == '':
                print("error")
                flag = False
                break
            if nR %2 ==0:
                arr[nD] = 'N'
            else:
                arr[len(arr)-nD-1] = 'N'
            nD +=1
            
    if(nR % 2 == 1):
        arr.reverse()
    if flag:
        s = "["
        for x in arr:
            if x != 'N':
                s+=x+','
        if len(s)>2:
            s=s[:-1]
        s+=']'
        print(s)