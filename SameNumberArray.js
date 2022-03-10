let n=5;
let arrA=[5,7,10,5,15];
let ArrB=[2,2,1,3,5];
let dummy=[],decs=false;

const check=(arr)=>
{
   let sum=0;
    arr.map((e)=>
    {  
       sum=sum+e;
            
    });

    if(sum/(arr.length)===arr[0])
    {
        return true;
    }
   else{
       return false;
   }
   

}



for (i=0;i<arrA.length;i++)
{
    dummy=arrA;
        
    for(j=i;j<ArrB.length;j++)
    {
         dummy[j]=arrA[j]-ArrB[j];
  
         console.log(dummy);
         
         if(check(dummy))
         {
             
             decs=true;
         }  
    }

}

console.log(decs);