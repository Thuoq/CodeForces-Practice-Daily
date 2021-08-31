#Link problem :https://codeforces.com/problemset/problem/520/A

i_n = int(input())
string = input()
if len(string) < 26:
    print('NO')
else:
    alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
                'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
    for char in string:
        if char.lower() in alphabet:
            alphabet.remove(char.lower())
    if len(alphabet)>0:
        print('No')
    else:
        print('YES')
