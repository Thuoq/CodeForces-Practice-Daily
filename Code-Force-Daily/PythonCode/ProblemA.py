s = input()
data = s.split('.')

if data[len(data)-1].lower() == 'py' :
    print('yes')
else:
    print('no')