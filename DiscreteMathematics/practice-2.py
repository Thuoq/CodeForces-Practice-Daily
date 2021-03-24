from get_words import get_words
import sys
sys.setrecursionlimit(1000000)
from GraphDirected import GraphDirected
words = get_words()
graph_directed = GraphDirected()

for word in words:
    graph_directed.addVertex(word)


allVertex = graph_directed.get_all_nodes()
for idx1 in range(len(allVertex)):
    for idx2 in range(len(allVertex)):
        if graph_directed.is_four_character(allVertex[idx1], allVertex[idx2]):
                    graph_directed.addEdge(allVertex[idx1],allVertex[idx2])

print("Strongly Component Numbers: ",end="") 
graph_directed.printSCCs()

for i in range(2):
    vertex_start = input('Nhập đỉnh bắt đầu từ: ')
    vertext_end = input('Nhập đỉnh kết thúc bằng từ: ')
    print(graph_directed.elements_between_two_vertexes(vertex_start, vertext_end))
