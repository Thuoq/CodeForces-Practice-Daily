from math import hypot,sqrt,pow

class Vector:
    def __init__(self,x=0,y=0):
        self.x= x
        self.y = y
    def __add__(self,other): # + operator
        x = self.x + other.x
        y = self.y + other.y
        return Vector(x,y)
    def __repr__(self): # representation
        return f"Vector({self.x},{self.y})"
    def __abs__(self):
        # Could another way by
        # sqrt(pow(self.x,2) + pow(self.y,2))
        #  return hypot(self.x,self.y)
        return hypot(self.x, self.y)
    def __mul__(self,scalar):
        return Vector(self.x * scalar,self.y*scalar)
    def __bool__(self):
        return bool(abs(self))
v1 = Vector(1,2)
v2 = Vector(2,2)
v3 = v1 + v2
# print(v1 * 3)
print(abs(v3))
