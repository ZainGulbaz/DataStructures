let x1 = 2564,
  v1 = 5393,
  x2 = 5121,
  v2 = 2836;

let a = x1 + v1,
  b = x2 + v2;

if (v1 > v2) {
  do {
    if (a < b) {
      a = a + v1;
      b = b + v2;
    }
  } while (a < b);
}

if (a === b) {
  console.log("YES");
} else {
  console.log("NO");
}
