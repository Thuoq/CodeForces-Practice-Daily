# # E_r = [{"q","s","d"},{"p","s"},{"s"}, {"p","r","s"}, {"p","r","s","d"}, {"q","d"},{"p"},{"r","s"}]
# E_r = [{"a","b"}, {"c","f"}, {"b","e","g","f"}, {"e","g","d"}, {"b","c","f"},{"a"}]
# # def checkD(subset):
# #   return not {"d"}.issubset(subset)
# # E_r = list(filter(checkD,E_r))
# print(E_r)
# def M_d():
#   A = []
#   for x in E_r:
#     for y in E_r:
#       if {"d"}.issubset(x):
#           A.append(x)
#           break
#       if  x !=y:
#         if x.issubset(y):
#           A.append(x)
#           break
#   return A
# print(A)
# print(E_r)

# E_r = list(filter(lambda x: x not in A,E_r))
# print(E_r)
# # def solve(E_r):
# #   for _ in E_r:
# #     if (_.issubset())
def checkD(subset):
  return not {"d"}.issubset(subset)
def M_d_fnc(E_r):
  E_r = list(filter(checkD,E_r))
  A = []
  for x in E_r:
    k = x
    for y in E_r:
      if k !=y:
        if k.issubset(y):
          k = y
    if k not in A:
      A.append(k)
  return A
def main() :
  n = int(input())
  R = {key: [] for key in input().split(' ')}
  R['d'] = []
  m = int(input())
  r = []
  for _ in range(m):
      h  = list(map(lambda x: int(x),input().split(' ')))
      for key,val in enumerate(R):
          R[val].append(h[key])
      r.append(h)
  E = []
  for j in range(m):
      for i in range(j):
          tmp = set()
          for _,val in enumerate(R):
              if R[val][i] == R[val][j]:
                  tmp.add(val)
          if tmp not in E :
              E.append(tmp)
  # print(E)
  print(M_d_fnc(E_r=E))
  M_d = set.intersection(*M_d_fnc(E_r=E))
  print(f"This is M_d")
  print(M_d)
  print(set(R.keys()) - M_d-set('d'))

if __name__ == '__main__':
  main()