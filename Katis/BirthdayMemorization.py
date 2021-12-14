n = int(input())
saves = []

while n:
    [name,times,days] = input().split(' ')
    times = int(times)
    saves.append([name,times,days])
    n-=1
saves.sort(key=lambda x : x[1],reverse=True)

_dict = {}

for _ in saves:
    if _[2] not in _dict:
        _dict[_[2]] = _[0]
ans = sorted(_dict.values(),key=lambda x: x)
print(len(ans))

for _ in ans :
    print(_)