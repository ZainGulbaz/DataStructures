
let n=6;


for(var i=1 ;i<n+1 ;i++)
{

   let Arr=new Array(n).fill(" ");
    for(var j=1;j<i+1;j++)
    {
          Arr[n-j]="#"
   
    }
    let str="";
    for(var k=0;k<Arr.length;k++)
    {
        str=str+Arr[k]
        
    }
console.log(str);
}
 


