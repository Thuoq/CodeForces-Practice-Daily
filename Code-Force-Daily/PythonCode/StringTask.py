# https://codeforces.com/problemset/problem/118/A
string = input()
vowels = ['a', 'o', 'y', 'e', 'u', 'i']
dot = '.'
result = ''
for char in string:
    if char.lower() not in vowels:
        result += dot + char.lower()
print(result)
