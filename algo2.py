def main():
    # INPUT 
    n = int(input())
    R = {key: [] for key in input().split(' ')}
    m = int(input())
    r = []
    for _ in range(m):
        h  = list(map(lambda x: int(x),input().split(' ')))
        for key,val in enumerate(R):
            R[val].append(h[key])
        r.append(h)
    A = set(input().split(' '))
    # END INPUT
    # STEP1 + STEP2
    E = []
    for j in range(m):
        for i in range(j):
            tmp = set()
            for _,val in enumerate(R):
                if R[val][i] == R[val][j]:
                    tmp.add(val)
            if len(tmp) and tmp not in E:
                E.append(tmp)
    for _ in E:
        if A.issubset(_):
            print(_ ,end=" ")
   
if __name__ == '__main__':
    main()
