
def isOperator(op):
    return (op == '+' or op == 'x')
def printMinExpression(exp):
    num = []
    opr = []
    tmp = ""
    for i in range(len(exp)):
        if (isOperator(exp[i])):
            opr.append(exp[i])
            num.append(int(tmp))
            tmp = ""
        else:
            tmp += exp[i]
    num.append(int(tmp))
    llen = len(num)
    minValue = [[ 0 for _ in range(llen)] for __ in range(llen)]  
    for i in range(llen):
        for j in range(llen):
            minValue[i][j] = 10**9
            if (i == j):
                minValue[i][j]  = num[i] 
    for L in range(2, llen + 1):
        for i in range(llen - L + 1):
            j = i + L - 1
            for k in range(i, j):
                minTemp = 0
                if(opr[k] == '+'):
                    minTemp = minValue[i][k] + minValue[k + 1][j]
                elif(opr[k] == 'x'):
                    minTemp = minValue[i][k] * minValue[k + 1][j]
                if (minTemp < minValue[i][j]):
                    minValue[i][j] = minTemp
    print("Minimum value : ",minValue[0][llen - 1])
           
 

expression = "3+4x5+6"
printMinExpression(expression)
