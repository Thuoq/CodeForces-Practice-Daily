n=1
flag = False
while n <=5:
    s = input()
    if 'FBI'in s:
        flag = True
        print(n)
    n+=1
if not flag:
    print("HE GOT AWAY!")