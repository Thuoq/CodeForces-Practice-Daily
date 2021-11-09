# E_r = [{"q","s","d"},{"p","s"},{"s"}, {"p","r","s"}, {"p","r","s","d"}, {"q","d"},{"p"},{"r","s"}]
E_r = [{"a","b"}, {"c","f"}, {"b","e","g","f"}, {"e","g","d"}, {"b","c","f"},{"a"}]
# def checkD(subset):
#   return not {"d"}.issubset(subset)
# E_r = list(filter(checkD,E_r))
print(E_r)
A = []
for x in E_r:
  for y in E_r:
    if {"d"}.issubset(x):
        A.append(x)
        break
    if  x !=y:
      if x.issubset(y):
        A.append(x)
        break
print(A)
print(E_r)

E_r = list(filter(lambda x: x not in A,E_r))
print(E_r)
# def solve(E_r):
#   for _ in E_r:
#     if (_.issubset())