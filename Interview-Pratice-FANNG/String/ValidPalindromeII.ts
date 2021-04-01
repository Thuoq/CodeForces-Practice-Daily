// Link problem: https://leetcode.com/problems/valid-palindrome-ii/

/**
 * Test Case 
 * abca
 * true
 */

function validSubPalindrome (s:string,left:number,right:number) {
    while (left < right) {
        if(s[left] !== s[right]) {
            
            return false
        }
        left ++;
        right--;
    }
    return true
}
const isValidPalindrome = (s: string) => {
    s = s.replace(/[^A-Za-z0-9]/g, '').toLowerCase();;
    let left = 0,right = s.length - 1;

    // loop through the string while expanding pointers outwards comparing the characters.
    while (left < right) {
        if (s[left] !== s[right]) {
            // don't need subtract two stirng
            return validSubPalindrome(s,left+1,right) || validSubPalindrome(s,left,right-1)
        }

        left++;
        right--;
    }

    return true;
}

console.log(isValidPalindrome("abca"))