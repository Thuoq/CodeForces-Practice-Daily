# https://codeforces.com/problemset/problem/96/A


string_binary = input()


def solution(binary_string):
    result = 1
    temp = ''

    for bi in string_binary:
        if bi == temp:
            result += 1
            if result >= 7:
                return 'YES'
        else:
            result = 1
        temp = bi

    return 'NO'


print(solution(string_binary))
