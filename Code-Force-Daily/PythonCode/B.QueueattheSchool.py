# Link question https://codeforces.com/problemset/problem/266/B


numbers_student_and_times = list(map(lambda x: int(x),input().split(' ')))
boys_and_girls = list(input())

idx = 0

while numbers_student_and_times[1] > 0:
    while idx < len(boys_and_girls):
        if boys_and_girls[idx] == 'G' and boys_and_girls[idx - 1] == 'B' and idx != 0: 
            boys_and_girls[idx - 1] = 'G'
            boys_and_girls[idx] = 'B'
            idx +=1
        idx +=1
    idx = 0
    numbers_student_and_times[1]-=1
print(''.join(map(str, boys_and_girls)))
