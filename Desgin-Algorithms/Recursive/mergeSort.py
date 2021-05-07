def merge_sort(arr):
    n = len(arr)
    if n > 1 :
        middle = round(n/2)
        merge_sort(arr[0:middle])
        merge_sort(arr[middle:n])
        merge(arr,middle)
   
 
arr_b = [0 for i in range(1,14) ]

def merge(arr,m):
    i = 1
    j = m +1
    n = len(arr)
    print(arr_b)
    for k in range(1,n):
        if j > n:
            arr_b[k] = arr[i]
        elif i > m:
            arr_b[k] = arr[j]
            j = j+1
        elif arr[i] < arr[j]:
        
            arr_b[k] = arr_b[i]
        else:
            arr_b[k] = arr[j]
            j = j +1
    for k in range(1,n):
        arr[k] = arr_b[k]
    
    # if arr1 == []:
    #     return arr2
    # elif arr2 == []:
    #     return arr1
    # else:
    #     if arr1[0] < arr2[0]:
    #         return [arr1[0]] + merge(arr1[1:],arr2)
    #     else:
    #         return [arr2[0]] + merge(arr1,arr2[1:])
print(merge_sort([2,1,2,5,0,201,1,2,5,2,6,19,99,2]))