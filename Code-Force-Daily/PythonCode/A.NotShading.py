t  = int(input())

def column(matrix, i):
    return 'B'in [row[i] for row in matrix]
while t:
    [R,C,r,c] = list(map(lambda x: int(x),input(' ').split(' ')))
    matrix = []
    check = False
    for _ in range(R): 
        arr = input()
        if 'B' in arr:
            check = True
        matrix.append(arr)
    # check same row 
    if matrix[r-1][c-1] == 'B':
        print(0)
    elif 'B' in matrix[r-1]: 
        print(1)
    elif column(matrix,c-1):
        print(1)
    elif not check:
        print(-1)
    else:
        print(2)
        
    t-=1