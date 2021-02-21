# https://codeforces.com/problemset/problem/339/A
operators = list(map(lambda num: int(num), input().split("+")))
new_sort = sorted(operators)


result = ''

for idx, numb in enumerate(new_sort):
    if idx < len(new_sort) - 1:
        result += str(numb) + '+'
    elif idx == len(new_sort) - 1:
        result += str(numb)

print(result)
