# https://codeforces.com/problemset/problem/263/A
matrix = []
for _ in range(0, 5):
    row = input().split(' ')
    matrix.append(row)
position = []
for i, _ in enumerate(matrix):
    for j, __ in enumerate(matrix[i]):
        if matrix[i][j] == '1':
            position.append(i)
            position.append(j)
            break

print(abs(position[0] - 2) + abs(position[1]-2))
