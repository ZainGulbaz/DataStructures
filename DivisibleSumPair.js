let k=3, arr=[1,3,2,6,1,2], factors=0;


for(var i=0; i<arr.length;i++)
{
      
   for(var j=i+1; j<arr.length;j++)
   {
          let sum= arr[i]+arr[j];
          
          if(sum%k==0)
          {
              factors++;
          }

   }


}
console.log(factors);