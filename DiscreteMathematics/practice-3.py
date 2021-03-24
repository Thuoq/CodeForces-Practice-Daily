from get_words import get_words
import sys
sys.setrecursionlimit(1000000)

from graph_coppy  import Graph
from get_words import get_words



words = get_words()
graph = Graph(len(words))
for i in range(len(words)):
    for j in range(len(words)):
        if i != j and graph.check(words[i], words[j]):
            graph.addEdge(i,j)

graph.printSCCs()
