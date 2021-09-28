def cut_rod(L, v):
    x = [0] * (L + 1) 
    for l in range(L + 1): 
        for piece in range(1, l + 1): 
            x_ = v[piece] + x[l - piece] 
            if x[l] < x_:
                x[l] = x_
        print(x[l],end=" ")
    return x[L]
L = 7
v = [0,1 ,10, 13, 18, 20, 31, 32]

print(cut_rod(L, v))