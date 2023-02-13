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

function main() {
  const t = +readLine();
  for (let i = 0; i < t; i++) {
    const _ = +readLine();
    const nums = readLine().split(" ").map(Number);
    console.log(solve(nums).join(" "));
  }
}

var __spreadArray =
  (this && this.__spreadArray) ||
  function (to, from, pack) {
    if (pack || arguments.length === 2)
      for (var i = 0, l = from.length, ar; i < l; i++) {
        if (ar || !(i in from)) {
          if (!ar) ar = Array.prototype.slice.call(from, 0, i);
          ar[i] = from[i];
        }
      }
    return to.concat(ar || Array.prototype.slice.call(from));
  };
function solve(nums) {
  var sorted = __spreadArray([], nums, true).sort(function (a, b) {
    return b - a;
  });
  var max = sorted[0];
  var maxSeconds = sorted[1];
  return nums.map(function (num) {
    if (num === max) {
      return max - maxSeconds;
    }
    return num - max;
  });
}
