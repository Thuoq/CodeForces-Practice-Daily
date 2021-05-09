from data import data
from directions import directions

def bfs(data):
    seen = [[False for i in range(len(data[0]))] for j in range(len(data))]
    queue = [[0,0]]
    values = []
    while(len(queue)):
        currentVal = queue.pop(0)
        row = currentVal[0]
        column = currentVal[1]
        if row < 0 or column < 0 or row >= len(data) or column >= len(data[0]) or seen[row][column]:
            continue
        seen[row][column] = True
        values.append(data[row][column])
        for direction in directions :
            next_row = row+ direction[0]
            next_col = column + direction[1]
            queue.append([next_row,next_col])
    return values
print(bfs(data))
