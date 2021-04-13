weight_both = list(map(lambda weight: int(weight), input().split(' ')))

temp = 0
while weight_both[0] <= weight_both[1]:
    weight_both[0] *= 3
    weight_both[1] *= 2
    temp += 1
print(temp)
