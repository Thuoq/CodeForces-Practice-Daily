// Link problem https://leetcode.com/problems/longest-substring-without-repeating-characters/

//Input: s = "abcabcbb"
//            Left
//            Right
//Output: 3
export const badSolution = () => {
    return (s: string): number =>{
            if (s.length <= 1) return s.length
            let longestChar = 0
            for(let left = 0; left < s.length ; left ++) {
                const seenChars:any = {}
                let longer = 0
                for (let right = left; right< s.length; right ++) {
                    
                    if (!seenChars[s[right]]){
                    
                        longer ++;
                        seenChars[s[right]] = true;
                        longestChar = Math.max(longer, longestChar) 
                    }else{
                        break;
                    }
                }
            }

            return longestChar
    };
    
}
// Time: O^2
// Space : 0(n)
console.log(badSolution()("abcabcbb"))
// Apply sliding windows technique
// When apply : From From a window over some portion of sequential
// data, then move that window through the data
// to capture different parts of it.
// Explain : "abcdefg", [1,2,3,4,56,3,9,2,4]
// Explian : "|ab| windows " // can me the windows forward backward increase size the windows
// How Apply : Linked list, array, string
export const goodSolution = () => {
    return (s: string): number => {
        if (s.length <= 1) return s.length
        let longest = 0
        let seenChars:any = new Map()
        let left = 0;
        for(let pointer = 0 ; pointer < s.length ; pointer++) {
            const currentChar = s[pointer]
            const prevSeenChar = seenChars.get(currentChar)
            if(prevSeenChar >= left) {
                left = prevSeenChar +1;
            }
            seenChars.set(currentChar,pointer);
            longest = Math.max(longest,pointer-left +1)
        }

        return longest
    };
}
console.log(goodSolution()("abcabcbb"))