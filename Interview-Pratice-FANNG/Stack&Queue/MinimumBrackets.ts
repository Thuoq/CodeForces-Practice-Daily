const minRemoveToMakeValid = (s: string): string => {
    const array_strings = s.split("")
    const stack = [];
    for (let i = 0 ; i < array_strings.length ; i ++) {
        if(array_strings[i]== ')' ) {
            if(!stack.length) {
                array_strings[i] = ''
            }else {
                stack.pop()
            }
        }
        else if(array_strings[i] =='('){
            stack.push(i)
        }
    }
    for(let i = 0 ; i <stack.length ; i ++) {
        array_strings[stack[i]] =''
    }
    return array_strings.join('')
};
console.log(minRemoveToMakeValid('))(('))
console.log(minRemoveToMakeValid("a)bc(d)"))
console.log(minRemoveToMakeValid("(ab(c)d"))
