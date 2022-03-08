def swap_case(s:str):
    return "".join(cha.upper() if cha.islower() else cha.lower() for cha in s)
    

if __name__ == '__main__':
    s =input()
    print(swap_case(s))