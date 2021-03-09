
class GraphUndirected():
    def __init__(self):
        self.numberOfNodes = 0 
        self.adjacentList = {}
        self.vertex_visited = {}
    
    def addVertex(self,node):
        self.adjacentList[node] = []
        self.numberOfNodes+=1
        return self.adjacentList
    
    def addEdge(self,node1, node2):
        ## undirected Graph
        self.adjacentList[node1].append(node2)
        self.adjacentList[node2].append(node1)
        return self.adjacentList[node1]
    
    def showConnections(self):
        allNodes = self.get_all_nodes()
        for node in allNodes:
            nodeConnections = self.adjacentList[node]
            connections = ""
            for vertex in nodeConnections:
                connections += vertex + " "
            print(node + "-->" + connections)
        
        # print(self.adjacentList)
    def is_the_sample_unique_character(self,word1,word2):
        temp = 0
        for cha1 in word1:
            if cha1 in word2:
                temp +=1
                word2 = word2.replace(cha1,'',1)
                if temp == 4:
                    return True
        return False

    def isPattern(self,node1):
        allNodes = self.get_all_nodes()

        list_words = []
        for node in allNodes:
            if self.is_the_sample_unique_character(node,node1):
                list_words.append(node)
        return list_words
    
    def init_visited_vertex(self):
        allNodes = self.get_all_nodes()
        for node in allNodes:
            self.vertex_visited[node] = False
        return self.vertex_visited
        
    def dfs(self):
        cc = 0
        allNodes = self.get_all_nodes()
        vertex_visited = self.init_visited_vertex()
        for node in allNodes:
            if not vertex_visited[node]:
                cc +=1
                self.expolore(node,self.adjacentList[node])
        print(cc)
    def expolore(self,node,graph):
        self.vertex_visited[node] = True
        for edge in graph:
            if not self.vertex_visited[edge]:
                self.expolore(edge, self.adjacentList[edge])
        
    def get_all_nodes(self):
        return list(self.adjacentList.keys())

    def find_path(self, start_vertex, end_vertex, path=None):
        """ 
        find a path from start_vertex to end_vertex 
            in graph 
        """
        if path == None:
            path = []
        graph = self.adjacentList
        path = path + [start_vertex]
        if start_vertex == end_vertex:
            return path
        if start_vertex not in graph:
            return None
        for vertex in graph[start_vertex]:
            if vertex not in path:
                extended_path = self.find_path(vertex,
                                               end_vertex,
                                               path)
                if extended_path:
                    return extended_path
        return None
