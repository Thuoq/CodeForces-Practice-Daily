N = int(input())
s =format(N,"b")
#print(type(s))

print(int(s[::-1],2))