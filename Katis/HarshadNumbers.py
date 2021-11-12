n = int(input())
def checkIsHardNumbers(targetNum):
    memo = targetNum
    total = 0
    while targetNum != 0:
        total += targetNum%10
        targetNum = int(targetNum/10)
    return (memo % total) == 0
_max = 1000000000
for _ in range(n,_max+1):
    if(checkIsHardNumbers(_)):
        print(_)
        break
