#Link Problem : https://codeforces.com/problemset/problem/41/A

words_berland = input()
words_birland = input()

if words_berland[::-1] == words_birland:
    print('YES')
else: 
    print('NO')

