# Link problem :https://codeforces.com/problemset/problem/122/A

number = int(input())


def is_four_seven(number_string):
    for letter in number_string:
        if letter != '4' and letter != '7':
            return False
    return True


def lucky_division(number):
    for i in range(1, number + 1, 1):
        lucky_number = is_four_seven(str(i))
        if lucky_number and number % i == 0:
            return 'YES'
    return 'NO'


print(lucky_division(number))
