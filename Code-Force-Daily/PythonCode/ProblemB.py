
n =int(input())
arr = list(map(lambda x : int(x),input().split(' ')))
_dict = {}
for _ in arr:
    if abs(_) not in _dict: 
        a = [_]
        _dict[abs(_)]=a
    else:
        _dict[abs(_)].append(_)
for key,value in enumerate(_dict):
    if len(_dict[value]) != 2:
        if _dict[value][0] * value > 0:
            print(-value)
        else:
            print(value)
        break