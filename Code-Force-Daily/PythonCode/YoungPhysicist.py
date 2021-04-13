list_array = []
lines_row = int(input())
sum1 = 0
sum2 = 0
sum3 = 0
while lines_row:
    array = list(map(lambda el: int(el), input().split(' ')))
    sum1 += array[0]
    sum2 += array[1]
    sum3 += array[2]
    lines_row -= 1

if sum1 == 0 and sum2 == 0 and sum3 == 0:
    print('YES')
else:
    print('NO')
