
[vertex,edge] = list(map(lambda x : int(x),input(' ').split()))
graph = dict()

def init_graph(edge:int):
    for _ in range(edge):
        [ver,edg] = list(map(lambda x : int(x),input(' ').split()))
        if ver not in graph:
            graph[ver] = []
        if edg not in graph:
            graph[edg] = []
        graph[ver].append(edg)
        graph[edg].append(ver)
init_graph(edge)
def dfs(u, graph, visited_edge, path=[]):
    path = path + [u]
    for v in graph[u]:
        if visited_edge[u][v] == False:
            visited_edge[u][v], visited_edge[v][u] = True, True
            path = dfs(v, graph, visited_edge, path)
    return path
def check_circuit_or_path(graph, max_node):
    odd_degree_nodes = 0
    odd_node = -1
    for i in range(max_node):
        if i not in graph.keys():
            continue
        if len(graph[i]) % 2 == 1:
            odd_degree_nodes += 1
            odd_node = i
    if odd_degree_nodes == 2:
        return 2, odd_node
    return 3, odd_node
def check_euler(graph, max_node):
    visited_edge = [[False for _ in range(max_node + 1)] for _ in range(max_node + 1)]
    check, odd_node = check_circuit_or_path(graph, max_node)
    if check == 3:
        print("graph is not Eulerian")
        print("no path")
        return
    start_node = 1
    if check == 2:
        start_node = odd_node
        print("graph has a Euler path")
    path = dfs(start_node, graph, visited_edge)
    print(path)
check_euler(graph,10)