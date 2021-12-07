[row,col] = list(map(lambda x: int(x),input().split(' ')))
matrix = []
for _ in range(row):
    matrix.append(input())
centers = []
for i in range(row):
    for j in range(col):
        if matrix[i][j] == '1':
            if i> 0 and j >0 and i < row-1 and j < col-1:
                if matrix[i][j-1] == '1' and matrix[i-1][j] == '1' and matrix[i+1][j] == '1' and matrix[i][j+1] == '1':
                    centers.append([i,j])
if len(centers):
    length_max = 0
    pos =[]
    for el in  centers:
        k_left = 0
        for i in range(el[0]-1,-1,-1):
            if matrix[i][el[1]] == '1':
                k_left+=1
        k_right = 0
        for i in range(el[0]+1,col,1):
            if matrix[i][el[1]] == '1':
                k_right +=1
        k_bottom = 0
        for i in range(el[1]+1,-1,-1):
            if matrix[el[0]][i] == '1':
                k_bottom +=1
        k_top = 0
        for i in range(el[1]-1,row,1):
            if matrix[el[0]][i] == '1':
                k_top +=1
        k_min = min([k_top,k_bottom,k_left,k_right])
        
        if 4*k_min +1 > length_max:
            length_max = 4*k_min+1
            pos.append(el[0])
            pos.append(el[1])

    print(length_max)
    print(f"{pos[len(pos)-2]+1} {pos[len(pos)-1]+1}")
   
else:
    print(-1)