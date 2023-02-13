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
  const n = +readLine();
  const nums = readLine().split(" ").map(Number);
  console.log(solve(nums));
}

function solve(nums) {
  var length = nums.length;
  var numFirst = 0;
  var numSecond = 0;
  var left = 0;
  var right = length - 1;
  var index = 0;
  while (left <= right) {
    if (index % 2 === 0) {
      if (nums[left] > nums[right]) {
        numFirst += nums[left];
        left++;
      } else {
        numFirst += nums[right];
        right--;
      }
    } else {
      if (nums[left] > nums[right]) {
        numSecond += nums[left];
        left++;
      } else {
        numSecond += nums[right];
        right--;
      }
    }
    index++;
  }
  return [numFirst, numSecond].join(" ");
}
