let b = 10,
  keyboards = [5, 2, 8],
  drives = [3, 1],
  purchase = 0;

keyboards.map((keyboard) => {
  drives.map((drive) => {
    if (keyboard + drive > purchase && keyboard + drive <= b) {
      purchase = keyboard + drive;
    }
  });
});

console.log(purchase);
