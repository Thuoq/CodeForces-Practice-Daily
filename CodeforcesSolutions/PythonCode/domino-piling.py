# https://codeforces.com/problemset/problem/50/A

m_n = list(map(lambda i: int(i), input().split(' ')))
area_domino = 2

print(int((m_n[0] * m_n[1]) / area_domino))
