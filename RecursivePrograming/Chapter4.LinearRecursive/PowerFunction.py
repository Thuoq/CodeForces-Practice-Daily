
import sys
sys.setrecursionlimit(1000000)
def pow_linear(num,n):
    if n == 0:
        return 1
    return num* pow_linear(num,n-1)
# print(pow_linear(4,2))

def power_general_linear(num,n):
    if n == 0:
        return 1
    elif n > 0: 
        return num * power_general_linear(num, n-1)
    else:
        return power_general_linear(num,n + 1)/num
def power_logarithmic(num,n):
    # base case 
    if n == 0:
        return 1
    if n % 2 == 0:
        return power_logarithmic(num,n//2)**2
    else:
        return num * (power_logarithmic(num, (n-1)//2) ** 2)


from time import time
t_0 = time()
num1 = pow_linear(2, 35000)
t_1 = time()
num2 = power_logarithmic(2, 35000)
t_2 = time()
print ('function vers1 takes %f' % (t_1-t_0))
print('===========================')
print ('function vers2 takes %f' % (t_2-t_1))

# Math 

# b^n = {
# TH1: n == 0 => 1
# TH2: n is even: => b^(n/2)^2
# TH3: n is odd: => b^(n-1/2)^2 *b
# }