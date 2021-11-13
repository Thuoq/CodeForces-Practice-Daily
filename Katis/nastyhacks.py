n = int(input())
while n:
    [r,e,c] = list(map(lambda x : int(x),input().split()))
    if e-c > r:
        print("advertise")
    elif e-c == r:
        print("does not matter")
    else:
        print("do not advertise")
    n-=1