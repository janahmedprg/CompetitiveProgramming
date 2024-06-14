n = int(input())

arr = list(map(int, input().split(" ")))

m = input()

queries = list(map(int, input().split(" ")))

prefix = [0]
for i in arr:
    prefix.append(prefix[-1] + i)


for target in queries:
    L = 0
    R = len(prefix)-1
    while L <= R:
        mid = L + (R - L)//2
        if prefix[mid] == target:
            print(mid+1)
        elif prefix[mid]<= target <= prefix[mid+1]:
            print(mid+1)
            break
        if prefix[mid] < target:
            L = mid + 1
        else:
            R = mid - 1