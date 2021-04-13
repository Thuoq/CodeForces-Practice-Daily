# Link problem:https://codeforces.com/problemset/problem/318/A
n_k = list(map(lambda x: int(x), input().split(' ')))
k = n_k[1]
n = n_k[0]

center = int(n/2+0.5)

if center < k: 
    print((k - center) * 2 )
else:
    print(k*2 -1)
   
    

