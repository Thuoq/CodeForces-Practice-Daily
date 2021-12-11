N = int(input())
while N:
    length =int(input())
    arr = list(map(lambda x : int(x),input().split(' ')))
    arr.sort()
    ans = 0
    for el in arr:
        ans = max(ans,arr[0])
        arr.pop()
        print(arr)
        print(el)
        arr = list(map(lambda x : x-el,arr))
        print(arr)
    print(ans)
    N-=1