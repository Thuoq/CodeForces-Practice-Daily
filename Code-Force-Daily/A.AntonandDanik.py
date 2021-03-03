number  = int(input())
a_and_d = input()

count_a = a_and_d.count('A')
count_d = a_and_d.count('D')
if count_a > count_d:
    print('Anton')
elif count_a < count_d: 
    print('Danik')
else:
    print('Friendship')
