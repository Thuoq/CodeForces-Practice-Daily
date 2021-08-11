import sys
sys.setrecursionlimit(100000000)
def double_sum_general(m,n):
    ans = 0
    for i in range(1,m+1):
        for j in range(1,n+1):
            ans += i +j
    return ans


# Time: O(m x n )
## Recursive function 
def inner_sum(m,n):
    if n <= 0:
        return 0
    return inner_sum(m,n-1) + (m+n)
def outer_sum(m ,n):
    if m <= 0:
        return 0
    return outer_sum(m-1,n) + inner_sum(m,n)
from time import time
t_0 = time()
# For mode
num_1 = double_sum_general(9000, 9000)
t_1 = time()
# Recursive mode
num_2 = outer_sum(9000,9000)
t_2 = time()
print ('function for  takes %f' % (t_1-t_0))
print('===========================')
print ('function recursive takes %f' % (t_2-t_1))
print(num_2,num_1)