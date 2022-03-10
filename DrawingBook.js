let n = 7,
  p = 3;
let front = 0,
  back = 0;

if (p % 2 == 0) {
  front = p / 2;

  if (n % 2 == 0) {
    back = (n - p) / 2;
  } else {
    back = (n - p) / 2;
  }
} else {
  p = p - 1;
  front = p / 2;

  if (n % 2 == 0) {
    back = (n - p) / 2;
  } else {
    back = (n - p) / 2;
  }
}

back = Math.floor(back);

front < back ? console.log(front) : console.log(back);
