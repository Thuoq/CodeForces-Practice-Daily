//https://codeforces.com/contest/313/problem/A
"use strict";

process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";
let currentLine = 0;

process.stdin.on("data", (inputStdin) => {
  inputString += inputStdin;
});

process.stdin.on("end", (_) => {
  inputString = inputString
    .trim()
    .split("\n")
    .map((string) => {
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
  // const n = +readLine();
  const arr = inputString.slice(1);
  for (let i = 0; i < arr.length; i++) {
    const nums = arr[i].split("").map(Number);
    solve(nums);
  }
}
function solve(nums) {
  var n = nums.length;
  var leftArr = nums.slice(0, 3);
  var rightArr = nums.slice(3, n);
  if (sum(leftArr) === sum(rightArr)) {
    console.log("YES");
    return;
  }
  console.log("NO");
}
function sum(num) {
  return num.reduce(function (sum, val) {
    return sum + val;
  }, 0);
}
