process.stdin.resume();
process.stdin.setEncoding('ascii');

var input_stdin = "";
var input_stdin_array = "";
var input_currentline = 0;

process.stdin.on('data', function (data) {
    input_stdin += data;
});

process.stdin.on('end', function () {
    input_stdin_array = input_stdin.split("\n");
    main();
});

function readLine() {
    return input_stdin_array[input_currentline++];
}

function solveMeFirst(a) {
    // Hint: Type return a+b below   
    if (a > 2 && a % 2 === 0) {
        return "YES"
    }
    return "NO"
}


function main() {
    var a = parseInt(readLine());

    var res = solveMeFirst(a);
    console.log(res);
}