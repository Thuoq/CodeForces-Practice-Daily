# Linkproblem: https://open.kattis.com/problems/sevenwonders
s = input()
store = {}
for cha in s:
    if cha in store:
        store[cha] +=1
    else: 
        store[cha] =1
three_count = 0
if len(store.values()) == 3:
    three_count = min(store.values())
ans = 0
for key in store:
    ans+= pow(store[key],2)
print(ans + 7*three_count)