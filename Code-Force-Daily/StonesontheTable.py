# https://codeforces.com/problemset/problem/266/A

lines = int(input())
colors = input()


def solution(lines, colors):
    result = 0
    temp = ''
    for col in colors:
        if col == temp:
            result += 1
        temp = col
    return result


print(solution(lines, colors))
