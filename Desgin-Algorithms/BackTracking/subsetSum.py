def print_subset_binary(sol, elements):
    no_elements = True
    print('{', end='')
    for i in range(0, len(sol)):
        if sol[i] == 1:
            if no_elements:
                print(elements[i], sep='', end='')
                no_elements = False
            else:
                print(', ', elements[i], sep='', end='')
    print('}')

def print_subset_sum(i, sol, psum, elements , x):
    # Base case
    if psum == x:
        print_subset_binary(sol, elements )
    elif i < len(elements ):  
        for k in range(0, 2):   
            if psum + k * elements [i] <= x:               
                sol[i] = k              
                psum = psum + k * elements[i]           
                print_subset_sum(i + 1, sol, psum, elements , x)
                sol[i] = 0


def print_subset_sum_wrapper(elements , x):
    sol = [0] * (len(elements))
    print_subset_sum(0, sol, 0, elements , x)
print_subset_sum_wrapper([1,2,1],2)
