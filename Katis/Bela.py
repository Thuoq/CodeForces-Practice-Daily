_data = {
    "A": [11,11],
    "K": [4,4],
    "Q": [3,3],
    "J": [20,2],
    "T": [10,10],
    "9": [14,0],
    "8": [0,0],
    "7":[0,0]
}
[N,dominant] =  input().split(' ')
N_max = 4*int(N)
ans = 0
while N_max:
    s = input()
    if s[1] == dominant:
        ans+= _data[s[0]][0]
    else:
        ans+= _data[s[0]][1]
    N_max -=1
print(ans)