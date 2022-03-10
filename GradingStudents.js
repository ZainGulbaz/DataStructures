let arr=[72,88,33,40];
 arr.map((e,i)=>{

if(e>37)
{

      for(j=1;j<3;j++)
      { 
          if((e+j)%5===0)
          {
               arr[i]=e+j;
          }

      }
    }

 });

 console.log(arr);
