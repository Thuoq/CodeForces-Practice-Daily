# khi nhap phai dung thu tu nhu sau 
# 6 
# N P Q X Y Z
# 4 4
# P Q X Y
# Q X Y Z
# N P Q Z
# P Q Y Z
# 0.667
def sup(X, transactions):
    X = set(X)
    _sup = 0
    for tran in transactions:
        if(X.issubset(tran)):
            _sup+=1
    return _sup
def main() :
    # START Handle Input
    N = int(input())
    _items = input().split(' ')
    [row,col] = list(map(lambda i: int(i),input().split(' ')))
   
    transactions = []
    for i in range(row):
        _ = input().split(' ')
        transactions.append(_)
  
    _min_sups = float(input())
    # END HANDLE Input


    X = [[] for i in range(N) ]
    A = []
    # [[],[],[],[]]
    # A [P,Q,Y,Z]
    # STEP 1
    for item in _items:
        _sups = sup(item,transactions)/len(transactions)
        if _sups >= _min_sups:
            A.append(item)
            X[0].append({item})
    # STEP 2
    for i in range(1,N):
        for el in X[i-1]:
            for _ in A:
                if not set(_).issubset(el):
                    extends = el.copy()
                    extends.add(_)
                    if X[i].count(extends): # check exist
                        continue
                    _sups = sup(extends,transactions)/len(transactions)
                    if _sups > _min_sups:
                        X[i].append(extends)
    print(X)
        
if __name__ == '__main__':

    main()