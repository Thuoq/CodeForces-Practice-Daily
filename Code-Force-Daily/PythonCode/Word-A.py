# Link problem: https://codeforces.com/problemset/problem/59/A
temp_is_lower = 0
temp_is_upper = 0
# print(len(lists_lower))
words = input()

for char in words:
    if char.islower():
        temp_is_lower +=1
    elif char.isupper():
        temp_is_upper+=1

if temp_is_upper > temp_is_lower:
    print(words.upper())
else:
    print(words.lower())
