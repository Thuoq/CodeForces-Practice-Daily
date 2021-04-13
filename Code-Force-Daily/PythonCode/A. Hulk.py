# Link problem https://codeforces.com/problemset/problem/705/A

hate = "I hate it"
love = "I love it"
n = int(input())
result = ''
for _ in range(1,n+1):
    result = result.replace('it', "that ")
    if _ % 2 == 0:
        result += love
    else:
        result+=hate
    

print(result)
