n_m = list(map(lambda x:int(x), input().split(" ")))
buttons = []
for _ in range(n_m[0]):
    button = list(map(lambda x:int(x), input().split(" ")))
    buttons.append(button[1:])
k = set()
for row in buttons:
    for el in row:
        k.add(el)

if len(k) == n_m[1]:
    print("YES")
else: 
    print("NO")