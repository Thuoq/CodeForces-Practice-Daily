n = 1
res = 0
idx = 1
while n <=5:
    _ = sum(list(map(lambda x : int(x),input().split(' '))))
    if res < _:
        idx = n
        res = _
    n+=1
print(f"{idx} {res}")