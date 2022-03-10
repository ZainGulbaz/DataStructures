let year = 1918;
let day;

if (year > 1699 && year < 1918) {
  //Julian Calendar
  if (year % 4 == 0) {
   day=12;
   
  }
  else{
   day=13;
  }
}
if (year >= 1918) {
  
if(year=1918)
{
    day=26;
}
else{
    if(year%400==0)
  {
      day=12;
  }
  else if(year%4==0 && year%100!==0)
  {
      day=12;
  }
  
  else {
      day=13;
  }
}
}

console.log(`${day}.09.${year}`);