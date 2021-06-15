def print_digits_reversed_vertical(n):
    if n < 10:
        print(n)
    else:
        print(n % 10,end=' ')
        print_digits_reversed_vertical(n//10)
print_digits_reversed_vertical(54321)

arr = [1,2,6,3,1,2,9]
def recursive_case_len(arr):
    if len(arr) == 1:
        return arr[0]
    else:
        middle = len(arr) // 2
        max_1 = recursive_case_len(arr[0:middle])
        max_2 = recursive_case_len(arr[middle:len(arr)])
        return max(max_1,max_2)


print(recursive_case_len(arr))
def findMaxRecursive(arr,start,end):
    if start == end:
        return arr[start]
    else:
        middle = (start + end) // 2
        m1 = findMaxRecursive(arr, start, middle)
        m2 = findMaxRecursive(arr, middle + 1, end)
        return max(m1,m2)

print(findMaxRecursive(arr,0,len(arr)-1))
