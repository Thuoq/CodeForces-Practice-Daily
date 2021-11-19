n = int(input())
while n:
    s = input()
    if 'Simon says' in s:
        print(s[10:])
    n-=1