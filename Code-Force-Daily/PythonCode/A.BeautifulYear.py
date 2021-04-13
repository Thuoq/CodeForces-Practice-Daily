# Link problem https://codeforces.com/problemset/problem/271/A
years = int(input())

while years > 0:
    years +=1
    a = int(years/1000)
    b = int((years % 1000)/100)
    c = int(((years % 1000) % 100)/10)
    d = int(((years % 1000) % 100) % 10)
    if a != b and a != c and a != d and d != c and d != b and c != b:
        break
print(years)
