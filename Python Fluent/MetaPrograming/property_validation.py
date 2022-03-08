# # class LineItem:
# #     def __init__(self,description, weight,price) -> None:
# #         self.description = description
# #         self.weight = weight
# #         self.price = price
# #     def subtotal(self):
# #         return self.weight * self.price
    
# #     @property
# #     def weight(self):
# #         return self.__weight 
# #     @weight.setter
# #     def weight(self,val:int):
# #         if val > 0:
# #             self.__weight = val
# #         else: 
# #             raise ValueError("Value must have > 0 ")

# # walnust = LineItem("2",2,10)
# # walnust.weight = 100
# # print(walnust)

# class LineItem:
#     def __init__(self,description, weight,price) -> None:
#         self.description = description
#         self.weight = weight
#         self.price = price

#     def subtotal(self):
#         return self.weight * self.price
    
#     def get_weight(self):
#         return self.__weight
#     def set_weight(self,val:int):
#         if val > 0:
#             self.__weight = val
#         else: 
#             raise ValueError("Value must have > 0 ")
#     weight = property(get_weight,set_weight)
# te = LineItem("a",1,20)
# te.weight = -10

# import re 

# x = re.compile(r'(Sun|To)?day')
# u = x.findall('Today is a nice day and a Sunday')
# print(u)

# print(sum(list(range(1,100))))

# import re
# x = re.compile(r'A-Za-z0-2')
# y = x.findall('Python_3')
# print(y)
# import math
# print(math.ceil(21.4))

# x = {0}
# print(0 in x)

a = [(x,y) for x in [0,1,2] for y in [3,4,5] if x != y]
print(a)