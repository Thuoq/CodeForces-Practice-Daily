/**
 * 
 *  Given two strings S and T, return if they are equal when both are typed into empty text editors. # means a backspace character.

 * Note that after backspacing an empty text, the text will continue empty.
 */

export const buildString = (words:string) => {
    let result1 = ''
    for (let char of words ) {
        if (char == '#') {
            result1 = result1.substring(0, result1.length - 1);
        }else{
            result1 += char
        }
    }
    return result1

} 
export const badSolution = (word1:string,word2:string) => {
    return buildString(word1) === buildString(word2)
}

export const goodSolution = (S:string, T:string) => {
    let p1 = S.length - 1
    let p2 = T.length - 1
    while(p1 >= 0 || p2 >= 0) {
        if(S[p1] === '#' || T[p2] === "#") {
            if (S[p1] === '#') {
                let backWord = 2
                while(backWord >0) {
                    p1 --
                    backWord --
                    if(S[p1] === "#") {
                        backWord +=2
                    }
                }
            }else {
                let backWord = 2
                while (backWord > 0) {
                    p2--
                    backWord--
                    if (T[p2] === "#") {
                        backWord += 2
                    }
                }
            }

        }else {
            if(S[p1] !== T[p2]) {
                return false
            }else {
                p1--
                p2--
            }
        }
    }
    return true;
}
console.log(goodSolution('avc#z','z'))