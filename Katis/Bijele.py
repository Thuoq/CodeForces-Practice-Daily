arr = list(map(lambda x :int(x), input().split(' ')))

default =[1,1,2,2,2,8]
for i in range(len(arr)):
    print(default[i]-arr[i],end=' ')