var DICT = {
    ".": "0",
    "-": {
        ".": "1",
        "-": "2"
    }
};
function solve(s) {
    var result = "";
    var index = 0;
    while (index < s.length) {
        var char = s[index];
        if (char === ".") {
            result += DICT[char];
        }
        if (char === "-") {
            var nextChar = s[index + 1];
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
