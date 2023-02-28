/** Is Unique: Implement an algorithm to determine if a string has all unique characters.
 *  What if you cannot use additional data structures? //
**/

const LENGTH_OF_ASCII = 128;
function isUnique(characters: string) {
  if (characters.length > 128) {
    return false
  }
  const isExits: boolean[] = new Array(LENGTH_OF_ASCII).fill(false)
  for (let i = 0 ; i < characters.length ; i ++) {
    const id = characters.charCodeAt(i)
    if(isExits[id]) {
      return false
    }
    isExits[id] = true
  }
  return true
}
console.log(isUnique('abc}x'))