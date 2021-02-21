# https://codeforces.com/problemset/problem/158/A
participants_and_score = list(map(lambda i: int(i), input().split(" ")))
scores_list = list(map(lambda li: int(li), input().split(" ")))
result = 0
for score in scores_list:
    if score >= scores_list[participants_and_score[1] - 1] and score > 0:
        result += 1
print(result)
