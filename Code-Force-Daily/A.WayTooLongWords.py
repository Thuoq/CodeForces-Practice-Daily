# Link Problem 
amounts = int(input())

while amounts>0:
    words = input()
    if(len(words)> 10):
        print(f"{words[0]}{len(words)-2}{words[len(words)-1]}")
    else:
        print(words)
    amounts-=1