const parentheses = new Map([
    ['[',']'],
    ['(',')'],
    ['{','}']
])
/// can use MAP for optimaize
const isValidParentheses = string => {
    const stack = []
    for(let i = 0 ; i < string.length ; i++) {
        if (parentheses.get(string[i])) {
            stack.push(string[i])  // O(1)
        }else {
            const leftBracket = stack.pop();
            const correctBracket = parentheses.get(leftBracket);
            if (string[i] !== correctBracket) return false
        }   
    }
    
    return !stack.length
}
//"(){}}{"
console.log(isValidParentheses("(){}}{"))