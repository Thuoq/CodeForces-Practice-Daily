def knapsack_0_1(i, w_left, current_v, sol,
                  opt_sol, opt_v, w, v, C):

    # Check base case
    if i == len(sol):
    # Check if better solution has been found
        if current_v > opt_v:
        # Update optimal value and solution
            opt_v = current_v
            for k in range(0, len(sol)):
                opt_sol[k] = sol[k]
    else:
        # Generate candidates
        for k in range(0, 2):

        # Check if recursion tree can be pruned
            if k * w[i] <= w_left:

    # Expand partial solution
             sol[i] = k

    # Update remaining capacity and partial value
            new_w_left = w_left - k * w[i]
            new_current_v = current_v + k * v[i]
            opt_v = knapsack_0_1(i + 1, new_w_left,
                                     new_current_v, sol,
                                     opt_sol, opt_v, w, v, C)
            # return value of optimal solution found so far
    return opt_v


def print_knapsack_solution(sol, w, v, C, opt_value):
    n = len(sol)
    k = 0
    while k < n and sol[k] == 0:
        k = k + 1

    total_weight = 0
    if k < n:
        print('(', w[k], ',', v[k], ')', sep='', end='')
        total_weight = total_weight + w[k]
        for i in range(k + 1, n):
            if sol[i] == 1:
                total_weight = total_weight + w[i]
                print(' + ', sep='', end='')
                print('(', w[i], ',', v[i], ')', sep='', end='')

    print(' => ', '(', total_weight,
             ',', opt_value, ')', sep='')



def knapsack_0_1_wrapper(w, v, C):
    sol = [0] * (len(w))
    opt_sol = [0] * (len(w))
    total_v = knapsack_0_1(0, C, 0, sol, opt_sol, -1, w, v, C)
    print_knapsack_solution(opt_sol, w, v, C, total_v)


w = [3, 6, 9, 5]  # List of object weights
v = [7, 2, 10, 4]  # List of object values
C = 15  # Weight capacity of the knapsack
knapsack_0_1_wrapper(w, v, C)
