# Link Problem : https://codeforces.com/problemset/problem/116/A
tram_numbers = int(input())

max_people = 0
temp_number = 0
while tram_numbers:
    passagers = list(map(lambda x: int(x), input().split(' ')))
    if max_people < temp_number:
        max_people = temp_number
    temp_number = temp_number + passagers[1] - passagers[0]
    tram_numbers -= 1
print(max_people)
