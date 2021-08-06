class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        solution = []
        state = []
        self.search(state,solution,n)

    def is_valid_state(self,state,n):
        # check if is is a valid solution
        return range(state) == n
    def get_cadidates(self,state,n):
        if not state:
            return range(n)
        position = len(state)
        candidates = set(range(n))

    def search(self, state,solutions,n):
        if(is_valid_state(state,n)):
            solutions.append(state.copy())
            return
        for candidate in get_cadidates(state):
            state.add(candidate)
            search(state, solutions)
            state.remove(candidate)
    def main():
        solutions = []
        state = set()
        search(state, solutions)
        return solutions
        

