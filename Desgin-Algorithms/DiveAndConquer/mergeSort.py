def merge(arr_left, arr_right):
    if arr_left == []:
        return arr_right
    elif arr_right == []:
        return arr_left
    else: 
        if (arr_left[0] > arr_right[0]):
            return [arr_left[0]] + merge(arr_left[1:],arr_right)
        else:
            return [arr_right[0]] + merge(arr_left, arr_right[1:])
def merge_sort(arr):
    n = len(arr)
    if n <= 1:
        return arr
    arr_left = merge_sort(arr[0:n//2])
    arr_right = merge_sort(arr[n//2:n])
    return merge(arr_left, arr_right)


print(merge_sort([2,3,4,9,1,0,9,8,3]))
