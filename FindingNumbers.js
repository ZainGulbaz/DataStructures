let arr = [4, [4, 7, 9], [5, 2, 10], [5, 5, 6], [2, 8, 1]];
let ways = [];

arr.map((e, i) => {
  let count=0;
  if (i > 0) {
    let a = 0,
      b = 0;
    if (e[1] > e[2]) {
      a = e[1];
      b = e[2];
    } else {
      a = e[2];
      b = e[1];
    }

    for (i = 1; i <= a; i++) {
      for (j = 1; j <= b; j++) {
        if (i * j == e[0]) {
          count++;
        }
      }
    }
    ways.push(count); 
}
 
});

console.log(ways);
