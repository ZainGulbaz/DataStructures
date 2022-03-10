let arr = [-4, 3, -9, 0, 4, 1];
let pos = 0,
  neg = 0,
  zero = 0;
arr.map((e) => {
  if ((e * -1) / Math.abs(e) === 1) {
    neg++;
  } else if ((e * -1) / Math.abs(e) === -1) {
    pos++;
  } else {
    zero++;
  }
});
