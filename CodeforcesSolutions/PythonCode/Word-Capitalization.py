# https://codeforces.com/problemset/problem/281/A

string = input()
result = string[0].upper()

for idx in range(len(string)):
    if idx > 0:
        result += string[idx]

print(result)
