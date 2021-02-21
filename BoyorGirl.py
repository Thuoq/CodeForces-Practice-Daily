# https://codeforces.com/problemset/problem/236/A
name_users = input()
set_dic = set({})
for char in name_users:
    set_dic.add(char)

if len(set_dic) % 2 == 0:
    print('CHAT WITH HER!')
else:
    print('IGNORE HIM!')
