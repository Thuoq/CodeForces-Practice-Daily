numbers_and_timesub = list(map(lambda x: int(x), input().split(' ')))


while numbers_and_timesub[1] > 0:
    if numbers_and_timesub[0] % 10 == 0:
        numbers_and_timesub[0] = int(numbers_and_timesub[0] / 10)
    else:
        numbers_and_timesub[0] -= 1

    numbers_and_timesub[1] -= 1
print(numbers_and_timesub[0])
