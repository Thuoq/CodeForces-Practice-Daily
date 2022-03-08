n = int(input())
s = set(map(int, input().split()))

t = int(input())
while t:
    [action,k] =  input().split()
    k = int(k)
    if action == 'pop':
        s.pop()
    elif action == 'discard':
        s.discard(k)
    elif action == 'remove':
        s.remove(k)
    t-=1
print(s)