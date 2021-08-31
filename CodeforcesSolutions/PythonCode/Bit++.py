# https://codeforces.com/problemset/problem/282/A

n = int(input())


list_operatios = []
result = 0
for i in range(n):
    list_operatios.append(input())

for operator in list_operatios:
    if operator == '++X' or operator == 'X++':
        result += 1
    elif operator == '--X' or operator == 'X--':
        result -= 1
print(result)
