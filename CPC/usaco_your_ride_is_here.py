s = input()

g = input()

p1 = 1
for i in range(len(s)):
    p1 *= ord(s[i])-64
    p1 %= 47

p2 = 1
for i in range(len(g)):
    p2 *= ord(g[i])-64
    p2 %= 47

if p1 == p2:
    print("GO")
else:
    print("STAY")