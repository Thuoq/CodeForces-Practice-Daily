from typing import List
def horner(c:List[int], x:int):
    if len(c) == 1:
        return c
    return c[0] + x*horner(c[1:], x)
