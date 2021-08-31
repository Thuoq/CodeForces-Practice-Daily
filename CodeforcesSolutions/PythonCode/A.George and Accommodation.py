#Link problem : https://codeforces.com/problemset/problem/467/A
number_room = int(input())
result = 0
while number_room > 0:
    peoples = list(map(lambda x: int(x),input().split( )))
    if peoples[1] - peoples[0] >=2:
        result +=1
    number_room -=1
print(result)