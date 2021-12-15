n = int(input())
days = []
_max = 0
for _ in range(n):
    [src,target ] = input().split(' ')
    src = int(src)
    target = int(target)
    _max = max(target,_max)
    days.append([src,target])
#days.sort(key=lambda x: x[1]-x[0],reverse=True)
arr = [0]*(_max+1)
for day in days:
    arr[day[0]:day[1]+1] = [1]*(day[1]-day[0]+1)
#print(arr)
print(arr.count(1))