def double_sum_general(m,n):
    ans = 0
    for i in range(1,m+1):
        for j in range(1,n+1):
            ans += i +j
    return ans


# Time: O(m x n )
print(double_sum_general(4,6))

## Recursive function 
def inner_sum(m,n):
    if n <= 0:
        return 0
    return inner_sum(m,n-1) + (m+n)
def outer_sum(m ,n):
    if m <= 0:
        return 0
    return outer_sum(m-1,n) + inner_sum(m,n)

print(outer_sum(4,6))