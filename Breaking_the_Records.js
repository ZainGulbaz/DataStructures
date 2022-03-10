var score = [3, 4, 21, 36, 10, 28, 35, 5, 24, 42];

let high = 0,
  low = 0,
  noHigh = 0,
  noLow = 0;

low = high = score[0];
score.map((e) => {
  if (e > high) {
    noHigh++;
    high = e;
  } else if (e < low) {
    noLow++;
    low = e;
  }
});

console.log(noHigh, noLow);
