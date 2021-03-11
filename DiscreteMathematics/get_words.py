def get_words():
 
    with open('sgb-words-test.txt') as f:
        # This drops the \n at the end of each line:
        words = f.read().splitlines()

    return words
