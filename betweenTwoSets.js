a = [2, 4];
b = [16, 32, 96];
let multiples = [],
  common = [];

for (var i = 1; i < b[0] + 1; i++) {
  let count = 0;
  a.map((e) => {
    if (i % e == 0) {
      count++;
    }
  });
  if (count == a.length) {
    multiples.push(i);
  }
}

multiples.map((arrEle) => {
  let count = 0;
  b.map((e) => {
    if (e % arrEle == 0) {
      count++;
    }
  });
  if (count == b.length) {
    common.push(arrEle);
  }
});

console.log(common);
