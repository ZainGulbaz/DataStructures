let steps = 8,
  path = "UDDDUDUU",
  count = 0,
  valley = 0,
  intoValley = false;

for (var i = 0; i < path.length; i++) {
  if (path[i] == "U") {
    count = count + 1;
  } else if (path[i] == "D") {
    count = count - 1;
  }

  if (count < 0) {
    intoValley = true;
  }

  if (count == 0 && intoValley) {
    valley++;
    intoValley = false;
  }
}

console.log(valley);
