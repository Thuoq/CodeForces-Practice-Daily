from get_words import get_words
import sys
sys.setrecursionlimit(100000)
from GraphDirected import GraphDirected
words = get_words()
graph_directed = GraphDirected()
# 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7

for word in words:
    node_partten = graph_directed.is_pattern(word)
    graph_directed.addVertex(word)
    if len(node_partten):
        for node in node_partten:
            graph_directed.addEdge(node, word)
