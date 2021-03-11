## Problem 
    #Xét tập dữ liệu sgb-words ở địa chỉ:http://www-cs-faculty.stanford.edu/~knuth/sgb-words.txt Tập dữ liệu này chứa phần lớn các từ tiếng Anh độ dài 5. Từ dữ liệu này, ta xây dựng đồ thị G=(V,E)với tập đỉnh V=“ mọi từ trong sgb-words”, và giữa hai từu và v trong G có cạnh nối nếu u,v khác nhau ở đúng một vị trí.Dễ thấy, trong đồ thị G, dãy từ
    # words, wolds, golds, goads, grads, grade, grape, graph là một đường đi với đỉnh bắt đầu là từ words và đỉnh kết thúc là từ graph.
    ## Read file 
import sys
sys.setrecursionlimit(100000)
from get_words import get_words
from Graph import GraphUndirected

words = get_words()

graph = GraphUndirected()
for word in words: 
    nodePattern = graph.isPattern(word)
    graph.addVertex(word)
    if len(nodePattern):
        for node in nodePattern:
            graph.addEdge(word, node)

print(graph.showConnections())
graph.dfs()

# graph.bfs('goads')
