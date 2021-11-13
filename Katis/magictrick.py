s = input()
k = ""
for i in range(len(s)):
    if s[i] in k:
        print(0)
        break
    k += s[i]
if len(k) == len(s):
    print(1)
