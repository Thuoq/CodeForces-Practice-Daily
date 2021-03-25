data = {
    0:"abcdef",
    1:"bc",
    2:"abdeg",
    3:"abcdg",
    4:"bcfg",
    5:"acdfg",
    6:"acdefg",
    7:"abc",
    8:"abcdefg",
    9:"abcdfg"
}
def check_string(string_d,string_t):
    for char in string_d:
        if char not in string_t:
            return False
    return True

def check(numberDefault,numberTarget):
    while numberDefault != 0:
        number_d = numberDefault %10
        number_t = numberTarget %10
        if not check_string(data[number_d],data[number_t]):
            return False
        numberDefault = int(numberDefault / 10)
        numberTarget = int(numberTarget/10)
    return True

V = int(input())
N = int(input())
numbers = int(pow(10,len(str(N))))

# print(N_words)
count = 0
if V == 1:
    while N != 0:
        number = N%10
        count += len(data[number])
        N= int(N/10)
else:
    #Tìm 1 thằng lớn N rồi so sánh đúng ko 
    for i in range(N+1,numbers):
        if check(N,i):
            print(i, end=" ")
            count+=1
print(count)


