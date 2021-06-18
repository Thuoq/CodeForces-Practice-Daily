# : 1 + 2
# (1,2) :=> 1 + (0,2)
# (0,2) :=> 2   
def slow_addition(num1,num2):
    if num1 == 0:
        return num2
    elif num2 == 0:
        return num1
    else:
        return slow_addition(num1,num2-1) + 1
print(slow_addition(3,2))

def quicker_addition(num1,num2):
    if num1 == 0:
        return num2
    elif num2 ==0 :
        return num1
    else:
        return quicker_addition(num1-1,num2-1) + 1 + 1

print(quicker_addition(3,5))