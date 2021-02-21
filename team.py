# https://codeforces.com/problemset/problem/231/A
n = int(input())
data = []
for _ in range(n):
    row = list(map(lambda i: int(i), input().split(' ')))
    data.append(row)

result = 0
for i, _ in enumerate(data):
    count = 0
    for j, __ in enumerate(data[i]):
        if data[i][j] == 1:
            count += 1
    if count >= 2:
        result += 1
print(result)
