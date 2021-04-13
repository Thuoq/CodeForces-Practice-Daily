#Link Problem: https://codeforces.com/problemset/problem/133/A


words = input()
hq_programing = ['H','Q',"9"]
def solution (words):
    for char in words:
        if char in hq_programing:
            return "YES"
    return "NO"


print(solution(words))