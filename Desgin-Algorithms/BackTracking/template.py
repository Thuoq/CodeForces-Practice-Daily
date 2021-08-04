
def is_valid_state(state):
    # check if is is a valid solution
    return True
def get_cadidates(state):
    return []

def search(state,solutions):
    if(is_valid_state(state)):
        solutions.append(state.copy())
        #return
    for candidate in get_cadidates(state):
        state.add(candidate)
        search(state, solutions)
        state.remove(candidate)
def main():
    solutions = []
    state = set()
    search(state, solutions)
    return solutions
    

if __name__ == '__main__':
    main()