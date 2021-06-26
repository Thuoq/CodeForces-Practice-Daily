# Decorator something like:
# @decorator
# def target():
    #print("This is target")

# target = decorator(target)

# Example
from typing import List, TextIO


def addThreeInteger(addTwo:int)->int:
    print(addTwo)
    print('Running decorator !!')
    return addTwo
@addThreeInteger
def addTwoInteger(num1:int, num2:int) -> int:
    return num1 + num2
@addThreeInteger
def addThree(num1:int , num2:int, num3 : int ) -> int:
    return num1 + num2 + num3
print(addTwoInteger(1,2))
print(addThree(1,2,3))

# Example 7-1. A decorator thường thay thế 

def deco(func):
    def inner():
        print('Running inner()')
    return inner
@deco
def target():
    print('running target')
target()
# When Python excutes Decorators
# Nó sẽ chạy ngay sau khi decorated func được xác đinh. 
registry:List = []
def register(func):
    print('Running register %s' %func)
    registry.append(func)
    return func

@register
def f1():
    print("running f1()")
@register
def f2():
    print("running f2()")
def f3():
    print("running f3()")
def main():
    print("running main(")
    print("Registry -> ", registry)
    f1()
    f2()
    f3()
# if __name__ == '__main__':
#     main()
# Decorator Enhanced Strategy Parrent (học sau)

# Variable Scope Rules

b =1
def f1(a) :
    print(a)
    print(b)
f1(3)
# * Nào nhìn 1 ví dụ có thể gây bất ngờ cho bạn. 
b = 6
def f2(a):
    
    # Fix isssue with global
    global b
    print(a)
    print(b)
    b = 9
f2(3)

# Closures 

class Averager():
    def __init__(self) -> None:
        self.series:List[int] = []
    def __call__(self,val:int):
        self.series.append(val)
        total= sum(self.series)
        return total / len(self.series)

avg = Averager()
avg(10)
avg(11)

print(avg(12))

# HOF
def make_average():
    series = []
    def averager(val : int ):
        series.append(val)
        total = sum(series)
        return total / len(series)
    return averager
avg = make_average()
avg(10)
avg(11)

# The Nonlocal Declaration 

def make_averager():
    count = 0
    total = 0
    def averager(val:int):
        # Error count is a number or any immutable type
        nonlocal count,total 
        count +=1
        total += val
        return total / count
    return averager