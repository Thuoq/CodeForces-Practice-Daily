
def towers_of_Hanoi_alt(n, o, d, a):
    if n > 0:
        towers_of_Hanoi_alt(n - 1, o, a, d)
        print('Move disk', n, 'from rod', o, 'to rod', d)
        towers_of_Hanoi_alt(n - 1, a, d, o)

towers_of_Hanoi_alt(4, 'O', 'D', 'A')