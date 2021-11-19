s = input()
n = len(s)
cnt_upper = 0
cnt_lower = 0
cnt_specail = 0
cnt_whitespace = 0
for i in s:
    
    if i.islower():
        cnt_lower+=1
    elif i.isupper():
        cnt_upper +=1
    elif i == '_':
        cnt_whitespace+=1
    else:
        cnt_specail+=1
print(cnt_whitespace/n)
print(cnt_lower/n)
print(cnt_upper/n)
print(cnt_specail/n)