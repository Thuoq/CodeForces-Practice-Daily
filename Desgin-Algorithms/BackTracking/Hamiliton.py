class Graph(): 
    def __init__(self, vertices): 
        self.graph = [[0 for column in range(vertices)]
                            for row in range(vertices)] 
        self.V = vertices 
    def check(self, v, pos, path): 
        if self.graph[ path[pos-1] ][v] == 0: 
            return False
        for vertex in path: 
            if vertex == v: 
                return False
        return True
    def pathHamilton(self, path, pos): 
        if pos == self.V: 
            return True
        for v in range(1,self.V): 
            if self.check(v, pos, path) == True: 
                path[pos] = v 
                if self.pathHamilton(path, pos+1) == True: 
                    return True
                path[pos] = -1
        return False
  
    def hamilton(self): 
        path = [-1] * self.V 
        for _ in range(self.V):
            path[_] = 0
            list_edge = self.return_list_index(_)
            if len(list_edge) > 0:
                for edg in list_edge:
                    if self.pathHamilton(path,edg): 
                        self.printSolution(path) 
                        return True
        print("Solution does not exist\n")
        return False
    def return_list_index(self,vertex):
        index_list = []
        for i in range(len(self.graph[vertex])):
            if self.graph[vertex][i] == 1:
                index_list.append(i)
        return index_list
    def printSolution(self, path): 
        print ("Solution Exists")
        for vertex in path: 
            print (vertex+1, end = " ")
        # print (path[0], "\n")

def main():
    [vertex,edge] = list(map(lambda x : int(x),input(' ').split()))
    g = Graph(vertex)
    for _ in range(edge):
        [v,e] = list(map(lambda x : int(x),input(' ').split()))
        g.graph[v-1][e-1] = 1
        g.graph[e-1][v-1] = 1
    g.hamilton()

if __name__ == '__main__':
    main()