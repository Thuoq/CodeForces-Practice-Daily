## Problem 
    #Xét tập dữ liệu sgb-words ở địa chỉ:http://www-cs-faculty.stanford.edu/~knuth/sgb-words.txt Tập dữ liệu này chứa phần lớn các từ tiếng Anh độ dài 5. Từ dữ liệu này, ta xây dựng đồ thị G=(V,E)với tập đỉnh V=“ mọi từ trong sgb-words”, và giữa hai từu và v trong G có cạnh nối nếu u,v khác nhau ở đúng một vị trí.Dễ thấy, trong đồ thị G, dãy từ
    # words, wolds, golds, goads, grads, grade, grape, graph là một đường đi với đỉnh bắt đầu là từ words và đỉnh kết thúc là từ graph.
    ## Read file 
with open("./sgb-words.txt",mode='r') as fs:
    word = fs.read()
    print(word)
