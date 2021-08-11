def selection_sort_rec(arr):
    if len(arr) <= 1:
        return arr
    
    arr.remove(min_b)
    return [min_b] + selection_sort_rec(arr)

print(selection_sort_rec([5,2,1,2,5,2]))