[P,N] = list(map(lambda x : int(x), input().split(' ')))
n =1 
_fixed = set()
flag = 9999
while n <= N:
    s = input()
    _fixed.add(s)
    
    if len(_fixed) == P:
        flag = min(flag,n)
    n+=1
if len(_fixed)!= P: 
    print("paradox avoided")
else:
    print(flag)