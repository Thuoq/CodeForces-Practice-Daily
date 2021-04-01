//Problem: Give a string, determine if it is a palindrome, considering
// only alphanumeric characters and ignoring case sensitivity

export const isValidPalindrome = (s:string) => {
    s= s.replace(/[^A-Za-z0-9]/g, '').toLowerCase();;
    let left = Math.floor(s.length / 2), right = left;

    // if the string is even, move left pointer back by 1 so left/right are pointing at the 2 middle values respectively.
    if (s.length % 2 === 0) {
        left--;
    }

    // loop through the string while expanding pointers outwards comparing the characters.
    while (left >= 0 && right < s.length) {
        if (s[left] !== s[right]) {
            return false
        }

        left--;
        right++;
    }

    return true;
}

console.log(isValidPalindrome("racecar"))