numberic_banana_solider = list(map(lambda x: int(x), input().split(' ')))


def arithmetic_sequence(number):
    return int((number * (number+1))/2)


if numberic_banana_solider[0]*arithmetic_sequence(
        numberic_banana_solider[2]) - numberic_banana_solider[1] < 0:
    print(0)
else:
    print(numberic_banana_solider[0]*arithmetic_sequence(
        numberic_banana_solider[2]) - numberic_banana_solider[1])
