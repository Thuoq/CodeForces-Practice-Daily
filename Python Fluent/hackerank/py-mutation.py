def mutate_string(string:str, position:int, character:str):
    l = list(string)
    l[position] = character
    
    return ''.join(l)

if __name__ == '__main__':
    s = input()
    i, c = input().split()
    s_new = mutate_string(s, int(i), c)
    print(s_new)