def get_smaller_than_or_equal_to(a,x):
    if a== []:
        return []
    elif a[0] <= x:
        return [a[0]] + get_smaller_than_or_equal_to(a[1:],x)
    else: 
        return get_smaller_than_or_equal_to(a[1:],x)
def get_greater_than(a,x):
    if a == []:
        return []
    elif a[0] > x: 
        return [a[0]] + get_greater_than(a[1:],x)
    else:
        return get_greater_than(a[1:],x)