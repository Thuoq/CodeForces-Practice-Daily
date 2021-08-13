def partition_Hoare_method(a,lower,upper):
    if lower <= 0:
        # Calculator middle and swap pivot and lower position
        middle = (lower + upper) //2
        pivot = a[middle]
        a[middle]= a[lower]
        a[lower] = pivot
        left = lower +1
        right = upper

        finished = False
        while not finished:
            # Check left < right and element leftside < pivot k and increase left by 1
            while left <= right and a[left] <=pivot:

                left +=1
            # Check rightside element > pivot element k and descrease right by 1
            while a[right] > pivot:
                right -=1
            
            # check if left < right
            # swapi left and right
            if left < right:
                aux = a[left]
                a[left] = a[right]
                a[right] = aux
            
            # Check condition make Interation
            finished = left > right

        a[lower] = a[right]
        a[right] = pivot
        return right
