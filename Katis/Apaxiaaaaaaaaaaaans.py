s = input()
ans = ""
for _ in range(len(s)):
    if not len(ans):
        ans+=s[_]
        continue
    if ans[len(ans)-1] != s[_]:
        ans+=s[_]
print(ans)