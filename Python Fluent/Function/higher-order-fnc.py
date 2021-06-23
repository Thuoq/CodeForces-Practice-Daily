#Higher-Order Functions
# A function that take a function ass argument or return a function as the result a HOF
fruits = ["strawberry","fig","apple","cherry","raspberry","banana"]
sorted(fruits,key=len)


def factorial(n):
    """
    Return n!
    """
    return 1 if n == 0 else n * factorial(n-1)

def reverse(word):
    return word[::-1]
fact = factorial
print(reverse("testing"))

print(sorted(fruits, key=reverse))

print(list(map(fact,range(6))))
print([fact(n) for n in range(6)])
print(list(map(factorial, filter(lambda x: x % 2,range(6)))))

from functools import reduce
from operator import add
print(reduce(add,range(100)))

## Anonymous Functions 

# Cách sử dụng 1 anonymouss fnc là sử dụng trong bối cảnh 1 là 1 argument của 1 list. Example
print(sorted(fruits,key=lambda word: word[::-1]))
# Đừng ham hố khi sử dụng lambda hãy chuyển sang def khi có thể 

## The Seven Flavors of Callable Objects

## User Defined Callable Types

import random
class BingoCage:
    def __init__(self,items):
        self._items = list(items)
        random.shuffle(self._items)
    def pick(self):
        try:
            print("Pick fnc running !!")
            return self._items.pop()
        except IndexError:
            raise LookupError('pick from empty BingoCage')
    def __call__(self):
        return self.pick()

bingo = BingoCage(range(3))
print(bingo.pick())
print(callable(bingo))

# Function introspection


def uppercase_decorator(function):
    # def wrapper():
    #     func = function()
    #     make_uppercase = func.upper()
    #     return make_uppercase
    print(function())
    return function


@uppercase_decorator
def say_hi():
    return 'hello there'


say_hi()
#Function Introspection

print(dir(factorial))
# From Positional to Keyword-Only Parameters
# Một trong những tính năng nhất của Pytohn functionss là rất flexiable parameter sử lý. * , ** explode

def tag(name, *content,cls=None,**attrs):
    """
    Generate one or more HTML tags
    """
    # *content is tuple
    # **attrs is dictionary
    print(attrs,content)
    if cls is not None:
        attrs['class'] = cls
    if attrs:
        attr_str = ''.join('%s="%s"' %(attr,value) for attr,value
        in sorted(attrs.items()))
    else:
        attr_str =''    
    if content:
        return '\n'.join('<%s %s>%s</%s>' % (name,attr_str,c,name) for c in content)
    else:
        return '<%s%s/>' % (name, attr_str)
print(tag('br'))
print(tag('p','Hello'))
print(tag('p','hello',id=33))