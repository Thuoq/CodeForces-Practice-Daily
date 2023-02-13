const DICT = {
  ".": "0",
  "-": {
    ".": "1",
    "-": "2",
  },
};
export function solve(s: string): string {
  let result = "";
  let index = 0;
  while (index < s.length) {
    const char = s[index];
    if (char === ".") {
      result += DICT[char];
    }
    if (char === "-") {
      const nextChar = s[index + 1];
      if (nextChar === "." || nextChar === "-") {
        result += DICT[char][nextChar];
      }
      index += 1;
    }
    index++;
  }
  return result;
}

console.log(solve(".-.--"));
console.log(solve("--."));
console.log(solve("-..-.--"));
