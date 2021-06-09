//https://codeforces.com/contest/313/problem/A
'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });

    main();
});

function readLine() {
    return inputString[currentLine++];
}
/*
 * Create the function factorial here
 * 
 * fun
 */
function main() {
    const n = +(readLine());
    if(n >= 0) {
        console.log(n);
    }else {
        if(n >= -10){
            console.log(0);
        }else {
            let s = n.toString();
            let position;
            parseInt(s[s.length - 1]) > parseInt(s[s.length - 2]) ? position = s.length - 1: position = s.length - 2;
            var toArr = Array.from(s);
            toArr[position] =''
            var finalString = +toArr.join('')
            finalString == '-0'? console.log(0) : console.log(finalString)
        }
        
        
    }
}