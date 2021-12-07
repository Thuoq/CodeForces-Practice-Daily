ans = []
while True:
    n = int(input())
    # handle input
    if n == 0:
        break
    N = 2*n
    A = []
    B = []
    while N:
        _ = int(input())
        if N > n:
            A.append([_,len(A)])
        else:
            B.append([_,len(B)])
        N-=1
    A.sort()
    B.sort()
    for _ in range(n):
        B[_][1] = A[_][1]
   
    B.sort(key=lambda l: l[1])  # sorts in place
    ans.append(B)
for an in ans: 
    for e in an:
        print(e[0])
    if an != ans[len(ans)-1]:
        print()
    