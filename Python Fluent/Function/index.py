def factorial(n):
    """
    Return n!
    """
    return 1 if n == 0 else n * factorial(n-1)


print(factorial(4))
print(factorial.__doc__)
print(list(map(factorial,range(11))))