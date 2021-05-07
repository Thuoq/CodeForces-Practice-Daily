def quickSort(arr):
    if len(arr) > 1:
        p = arr[len(arr)-1]
        r = partition(arr,p)