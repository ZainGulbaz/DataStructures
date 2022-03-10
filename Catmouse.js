let x=2;
let y=3;
let z=2;

for(var i=0 ;i<x;i++)
{

if(Math.abs((z[i]-x[i]))>Math.abs((z[i]-y[i])))
{
    console.log("Cat B")
}
else if(Math.abs((z[i]-y[i]))>Math.abs((z[i]-x[i]))) {
    console.log("Cat A");

}

else if(Math.abs((z[i]-x[i]))==Math.abs((z[i]-y[i]))){
    console.log("Mouse C");
}
}