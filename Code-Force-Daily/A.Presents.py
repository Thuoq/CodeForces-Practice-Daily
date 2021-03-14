# Link problem: https://codeforces.com/problemset/problem/136/A

number_people = int(input())
gift_friends = list(map(lambda x: int(x),input().split( )))
dummy_people = [0]

data = dummy_people + gift_friends
result = [0] * number_people 

for idx,value in enumerate(data):
    if idx >= 1:
    
        result[value-1] = idx 
print(*result)
