n,m,k = [int(i) for i in input().split()]

maze = []

s = 0
for i in range(n):
    maze.append(input())
    s += maze[i].count('.')

visited = {}

node = (0,0)
queue = []
for i in range(n):
    for j in range(m):
        if(maze[i][j]) == '.':
            visited[(i,j)] = 1
            node = (i,j)
            queue.append((i,j))
            break
    if len(queue) >0:
        break

count = 1

for i in range(n):
    for j in range(m):
        if maze[i][j] == "#":
            # print(i,j)
            visited[(i,j)] = 1

# print(visited)

while len(queue) >0:
    currNode = queue[0]
    queue = queue[1:]
    

    for d in [(-1,0), (1,0), (0,1), (0,-1)]:
        x = currNode[0] + d[0]
        y = currNode[1] + d[1]

        
        if not (0<= x <n):
            continue
        if not (0<= y < m):
            continue
        # print(x,y)
        if (x,y) in visited:
            continue

        # print(x,y,"hello")
        if count == s-k:
            break
        visited[(x,y)] = 1
        count += 1 
        queue.append((x,y))
    if count == s-k:
        break

for i in range(n):
    str = ""
    for j in range(m):
        if maze[i][j] == "#":
            str+="#"
            continue
        if (i,j) in visited:
            str+="."
        else:
            str+="X"
    print(str)
    str=""




