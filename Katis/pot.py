n  = int(input())
ans = 0
while n:
    s = input()
    num = int(s[:len(s)-1])
    _pow = int(s[len(s)-1])
    # print(f" {num} is {_pow}")
    ans += pow(num,_pow)
    n-=1
print(ans)