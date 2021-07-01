def linear_search_linear(a,x,n):
    if a == []:
        return -n -1 # return -1 if do not found it 
    elif a[0] == x:
        return 0 # return position when it found !
    else:
        # recursive case
        return 1 + linear_search_linear(a[1:],x,n)
def linear_search_linear_wrapper(a,x):
    return linear_search_linear(a,x,len(a))
print(linear_search_linear_wrapper([1,2,3,4,5],1))

def linear_search_tail_alt(a,x,index):
    if a == []:
        return - 1
    elif a[0] == x: 
        return index
    else:
        return linear_search_tail_alt(a[1:],x,index + 1)
def linear_search_alt_tail_wrapper(a,x):
    return linear_search_tail_alt(a,x,0)

print(linear_search_alt_tail_wrapper([1,2,3,4,5],5))

def binary_search_recursive(arr,left,right,found): 
    if left > right :
        return -1
    else:
        middle = (left + right) /2 
        if arr[middle] == found:
            return middle
        elif found > arr[middle]:
            return binary_search_recursive(arr,middle + 1, right)
        else:
            binary_search_recursive(arr,left, middle-1)     