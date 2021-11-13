card = input().split(' ')
_dict = {}
for _ in card:
    if _[0] not in _dict:
        _dict[_[0]]=1
    else:
        _dict[_[0]]+=1

print(max(_dict.values()))