## Problem 
    #Xét tập dữ liệu sgb-words ở địa chỉ:http://www-cs-faculty.stanford.edu/~knuth/sgb-words.txt Tập dữ liệu này chứa phần lớn các từ tiếng Anh độ dài 5. Từ dữ liệu này, ta xây dựng đồ thị G=(V,E)với tập đỉnh V=“ mọi từ trong sgb-words”, và giữa hai từu và v trong G có cạnh nối nếu u,v khác nhau ở đúng một vị trí.Dễ thấy, trong đồ thị G, dãy từ
    # words, wolds, golds, goads, grads, grade, grape, graph là một đường đi với đỉnh bắt đầu là từ words và đỉnh kết thúc là từ graph.
    ## Read file 
import sys
sys.setrecursionlimit(100000)
from get_words import get_words
from GraphUndirected import GraphUndirected

words = get_words()

graph = GraphUndirected()

#graph.showConnections()
for word in words: 
    nodePattern = graph.isPattern(word)
    graph.addVertex(word)
    if len(nodePattern):
        for node in nodePattern:
            graph.addEdge(word, node)

print("Số thành phần Liên thông của đồ thị là:")
graph.dfs()
for i in range(2):
    vertex_start = input('Nhập đỉnh bắt đầu từ: ')
    vertext_end = input('Nhập đỉnh kết thúc bằng từ: ')
    print(graph.elements_between_two_vertexes(vertex_start, vertext_end))

