/*
* Check Permutation: Given two strings,write a method to decide if one is a permutation of the other.
**/

function isPermutationBad(text:string, paragraph: string) {
  if(text.length !== paragraph.length) {
    return false
  }
  // sorted

  return Array.from(text).sort().toString() === Array.from(paragraph).sort().toString()
}
console.log(isPermutationBad('abc','cba'));
console.log(isPermutationBad('abd','dec'))
// toi uuhu hon

function isPermutationGood(text:string,paragraph: string) {
  if(text.length !== paragraph.length) {
    return false
  }
  const letters: {[key: string] : number} = {}
  for(let char of text) {
    if(letters[char]) {
      letters[char] ++;
    }else {
      letters[char] = 1
    }
  }
  for(let char of paragraph) {
    if(!letters[char]) {
      return false;
    }
    letters[char]--;
  }
  return true
}

console.log(isPermutationGood('abc','abc'));
console.log(isPermutationGood('abcd','abdc'));