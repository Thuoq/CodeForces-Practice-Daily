# https: // codeforces.com/problemset/problem/112/A


alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
            'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

str1 = input()
str2 = input()

temp = 0
for idx, value in enumerate(str1):
    if alphabet.index(value.lower()) < alphabet.index(str2[idx].lower()):
        temp = -1
        break
    elif alphabet.index(value.lower()) > alphabet.index(str2[idx].lower()):
        temp = 1
        break

print(temp)


# alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
#             'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

# str1 = input()
# str2 = input()

# sum1 = 0

# for idx, value in enumerate(str1):
#     sum1 += alphabet.index(value.lower()) - alphabet.index(str2[idx].lower())

# if sum1 > 0:
#     print(1)
# elif sum1 < 0:
#     print(-1)
# else:
#     print(0)
