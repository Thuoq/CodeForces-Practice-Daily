#Link problem:https://open.kattis.com/problems/encodedmessage
from math import sqrt
t = int(input())
while t:
    s = input()
    square = int(sqrt(len(s))) # 3 
    arr = []
    for i in range(square): # 0 1 2
    
        ans = ""
        k = i
        for j in range(square): # 0 1 2
            ans += s[k]
            k+=square
        arr.append(ans)
    arr.reverse()
    res = ""
    for _ in arr:
        res += _
    print(res)
            
    t-=1