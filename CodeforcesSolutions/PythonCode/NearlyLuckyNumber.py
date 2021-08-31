#Link Problem : https://codeforces.com/problemset/problem/110/A

number = input()

def count_lucky_four_seven(number_string):
    count_lucky_number = 0 
    for letter in number_string:
        if letter == '4' or letter == '7':
            count_lucky_number+=1
    return count_lucky_number


def is_four_seven(number):
    if number == 4 or number == 7:
        return 'YES'
    return 'NO'


print(is_four_seven(count_lucky_four_seven(number)))
