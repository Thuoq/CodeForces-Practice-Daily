from data import data
from directions import directions
def dfs(data,values,row,column,seen):
  
    if row < 0 or column < 0 or row >= len(data) or column >= len(data[0]) or seen[row][column]:
        return

    val = data[row][column]
    values.append(val)
 
    seen[row][column] = True
    for direction in directions:
        next_row = row + direction[0]
        next_col = column + direction[1]
        dfs(data,values,next_row,next_col,seen)
def travel_dfs(data):
    values = []
    seen = [[False for i in range(len(data[0]))] for j in range(len(data))]
    dfs(data,values,0,0,seen)
    return values
  
print(travel_dfs(data))
