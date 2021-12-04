import math
s = input()
_l = len(s) # len s 
_min = int(_l/3)
st = {}
tmp = 0
__min = _min
while _min <= _l:
    if s[tmp:_min] in st:
        st[s[tmp:_min]]+=1
    else:
        st[s[tmp:_min]]=1
    tmp+=__min
    _min+=__min
_max = max(st.values())
for ans in st:
    if st[ans] == _max:
        print(ans)
        break