x_dict = {}

y_dict = {}

n = 3
while n:
    [x,y] = list(map(lambda x: int(x),input().split(' ')))
    if x not in x_dict:
        x_dict[x] = 1
    else:
        x_dict[x] +=1
    if y not in y_dict:
        y_dict[y] = 1
    else:
        y_dict[y] +=1
    n-=1

for key,value in enumerate(x_dict):
    if x_dict[value] != 2:
        print(value,end=' ')
        break
for key,value in enumerate(y_dict):
    if y_dict[value] != 2:
        print(value)
        break
