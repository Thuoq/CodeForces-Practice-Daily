
  
from collections import defaultdict
   

class Graph:
   
    def __init__(self,vertices):
        self.V= vertices 
        self.graph = defaultdict(list) 
   
    
    def addEdge(self,u,v):
        self.graph[u].append(v)
   
   
    def DFS(self,v,visited):
       
        visited[v]= True
        
        for i in self.graph[v]:
            if visited[i]==False:
                self.DFS(i,visited)
  
  
    def fillOrder(self,v,visited, stack):
        # Mark the current node as visited 
        visited[v]= True
        #Recur for all the vertices adjacent to this vertex
        for i in self.graph[v]:
            if visited[i]==False:
                self.fillOrder(i, visited, stack)
        stack = stack.append(v)
      
  
  
    def getTranspose(self):
        g = Graph(self.V)
  
      
        for i in self.graph:
            for j in self.graph[i]:
                g.addEdge(j,i)
        return g

    def check(self,word1, word2):
        count = 0
        for i in range(1, 5):
            for j in range(5):
                if word1[i] == word2[j]:
                    count += 1
                    word2 = word2.replace(word2[j], '1', 1)
                    break
        if count == 4:
            return True
        return False
   
    def printSCCs(self):
        count = 0
        stack = []
        
        visited =[False]*(self.V)
        
        for i in range(self.V):
            if visited[i]==False:
                self.fillOrder(i, visited, stack)
  
        gr = self.getTranspose()
           
         
        visited =[False]*(self.V)
  
        
        while stack:
            i = stack.pop(0)
            if visited[i]==False:
                gr.DFS(i, visited)
                count+=1

        print(count)
            
