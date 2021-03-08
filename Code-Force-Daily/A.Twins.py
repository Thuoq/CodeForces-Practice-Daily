# Link problem :https://codeforces.com/problemset/problem/160/A


number_coins = int(input())
list_coins = list(map(lambda x: int(x),input().split(' ')))
sum_coins = sum(list_coins)
result = 0
count_coins = 0

while result <= sum_coins:
    result += max(list_coins)
    list_coins.remove(max(list_coins))
    sum_coins = sum(list_coins)
    count_coins+=1
print(count_coins)
