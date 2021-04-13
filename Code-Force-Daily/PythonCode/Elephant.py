# Problem :https://codeforces.com/problemset/problem/617/A
distant = int(input())
step = 0

while distant > 0:
    if distant % 5 == 0:
        distant = distant - 5
    else:
        distant = distant - distant % 5

    step += 1
print(step)
