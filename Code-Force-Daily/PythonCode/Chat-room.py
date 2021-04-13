# Link problem : https://codeforces.com/problemset/problem/58/A
word = 'hello'
letters = input()
count = 0
idxj = 0


def result_solution(letters):
    global count
    global idxj
    for idx in range(len(letters)):
        if letters[idx] == word[idxj]:
            idxj += 1
            count += 1
        if count == 5:
            return 'YES'
    return 'NO'


print(result_solution(letters))
