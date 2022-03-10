let bill=[3,10,2,9],
k=1,
b=7,
sum=0;

bill.map((e,i)=>{
    
    if(k==i)
    {
        null;
    }
    else{
      sum=sum+e;  
    }

});

let diff= b-(sum/2);
if(diff==0)
{
    console.log("Bon Appitie");
}
else{
    console.log(diff);
}