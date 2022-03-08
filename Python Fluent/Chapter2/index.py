x = 'ABC'
dummy = [ord(x) for x in x]
print(x)
print(dummy)
# defined function parameters *args
a,b,*rest = range(5)
print(rest)
print(a,b)

# Nested tupled Unpacking

metro_area = [
   ('Tokyo', 'JP', 36.933, (35.689722, 139.691667)),
   ('Delhi NCR', 'IN', 21.935, (28.613889, 77.208889)),
   ('Mexico City', 'MX', 20.142, (19.433333, -99.133333))
]
# fmt = '{:.15} | {:9.4f} | {:9.4f}'
# for name,cc,pop,(latitude,longitude) in metro_area:
#     if longitude >= 0:
#         print(fmt.format(name,cc,longitude))
# Name tuple 

from collections import namedtuple
City = namedtuple('City','name country population coordinates')
tokyo = City('Tokyo', 'JP', 36.933, (35.689722, 139.691667))
print(type(tokyo))
print(tokyo.name)

t = (1, 2, [30, 40])


l1 = [3,[55,34],(7,8,9)]
l2 = list(l1)
print(l2 == l1)
l2.append(10)
print(l2 == l1)