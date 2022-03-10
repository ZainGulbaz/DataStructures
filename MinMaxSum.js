arr = [3,2,1,3];
let max = arr[0],
  min = arr[0];
arr.map((e, i) => {
  if (e > max) {
    max = e;
  } else if (min > e) {
    min = e;
  }
});

let minSum = 0,
  maxSum = 0;
arr.map((e) => {
  if (max != min) {
    if (max != e) {
      minSum += e;
    }
    if (min != e) {
      maxSum += e;
    }
  } else {
    maxSum = max * arr.length - max;
    minSum = maxSum;
  }
});

console.log(minSum, maxSum);
