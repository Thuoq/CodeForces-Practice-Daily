# Link problem :https://codeforces.com/problemset/problem/479/A
a = int(input())
b = int(input())
c = int(input())
# 1+2*3 = 7
# 1*(2+3) = 5
# 1*2*3 = 6
# (1+2)*3 = 9
ep1= a + b * c
ep5 = a * (b + c)
ep2 = a * b*c
ep3 = (a + b)*c
ep4 = a + b + c
ep6 = a * b + c


print(max(ep1,ep2,ep3,ep4,ep5,ep6))
