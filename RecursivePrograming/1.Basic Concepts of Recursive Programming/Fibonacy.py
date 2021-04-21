# Tính n-th số Fibonacci 

def fibonacci(n):
    if n==1 or n == 2: 
        return 1
    return fibonacci(n-1) + fibonacci(n-2)

# Tính  n-th số Fibonacci
# n =5 
# CAL: {
    # 1  if n = 1
    # 1  if n = 2 
    # 1 + tổng F(i) i=[1,n-2] if n >2
#}
# FIBONACCI: 1 1 2 3 5 8
stored_memo = [0,0,0,0,0,0,0,0]
def fibonacci_alt(n):
    if n ==1 or n == 2:
        return 1
    else:
        aux = 1
        for i in range(1,n-1): # [1,4) , 1 -> 2
            aux += fibonacci_alt(i) # 2 + 2 + 1+2
        return  aux
print(fibonacci_alt(5))


stored_memo = [0,0,0,0,0,0,0,0]
def fibonacci_alt_memo(n):
    if n ==1 or n == 2:
        return 1
    else if (stored_memo[n]):
        return stored_memo[n]
    else:
        aux = 1
        for i in range(1,n-1): # [1,4) , 1 -> 2
            if(not stored_memo[i]):
                stored_memo[i] = aux
            aux += fibonacci_alt(i) # 2 + 2 + 1+2
        return  aux