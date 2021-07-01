
def contains_digit(n,d):
    if n < 10:
        return n == d
    return n % 10 == d or contains_digit(n//10,d)

def containts_digit_tail(n,d):
    if n < 10 : 
        return n == d
    elif n % 10 == d:
        return True
    else:
        return contains_digit(n//10,d)
from time import time
t_0 = time()
num1 = contains_digit(999999999999999999999999999999999999999999999999999999999999990689083466333737890303378978904567791, 1)
t_1 = time()
num2 = containts_digit_tail(999999999999999999999999999999999999999999999999999999999999990689083466333737890303378978904567791, 1)
t_2 = time()
print ('function vers1 takes %f' % (t_1-t_0))
print('===========================')
print ('function vers2 takes %f' % (t_2-t_1))

## 5.1.2 Equal Strings 
def equal_strings_tails(s,t):
    if len(s) != len(t):
        return False
    elif s == '':
        return True
    elif s[0] != t[0]:
        return False
    else:
        return equal_strings(s[1:],t[1:])
def equal_strings(s,t):
    if len(s) != len(t):
        return False
    elif len(s) == "":
        return True
    else:
        return s[0] == t[0] and equal_strings(s[1:],t[1:])