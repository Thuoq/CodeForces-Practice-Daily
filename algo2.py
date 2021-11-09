# def main():
#     # INPUT 
#     n = int(input())
#     R = {key: [] for key in input().split(' ')}
#     m = int(input())
#     r = []
#     for _ in range(m):
#         h  = list(map(lambda x: int(x),input().split(' ')))
#         for key,val in enumerate(R):
#             R[val].append(h[key])
#         r.append(h)
#     A = set(input().split(' '))
#     # END INPUT
#     # STEP1 + STEP2
#     E = []
#     for j in range(m):
#         for i in range(j):
#             tmp = set()
#             for _,val in enumerate(R):
#                 if R[val][i] == R[val][j]:
#                     tmp.add(val)
#             if len(tmp) and tmp not in E:
#                 E.append(tmp)
#     for _ in E:
#         if A.issubset(_):
#             print(_ ,end=" ")
   
# if __name__ == '__main__':
#     main()
E_r = [{"q","s","d"},{"p","s"},{"s"}, {"p","r","s"}, {"p","r","s","d"}, {"q","d"},{"p"},{"r","s"}]
def checkD(subset):
  return not {"d"}.issubset(subset)
E_r = list(filter(checkD,E_r))
print(E_r)
for x in E_r:
 
  for y in E_r:
    if  x !=y:
      if x.issubset(y):
        E_r.remove(x)
        #flag = True
        break;
 
print(E_r)

# def solve(E_r):
#   for _ in E_r:
#     if (_.issubset())