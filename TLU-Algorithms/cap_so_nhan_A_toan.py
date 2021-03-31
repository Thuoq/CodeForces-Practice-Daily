def sum_geometric_sequence(a,r,n):
    tu_so = a*(1-pow(r,n))
    mau_so = 1 -r 
    return tu_so / mau_so

print(sum_geometric_sequence(pow(10,9),pow(10,9),pow(10,9)))

# Test 1 4 5
# a =1 r=4 n =5
## 1 + 1*4 + 1*16 + 1*64 + 1* 256 + 1*1024