let arr=[4];
let d=4,m=1;
let possSquares=0;

arr.map((e,i)=>{
    let sum=e,j=1;
    
    while(j!=m)
    {
        sum=sum+arr[i+j];
        j++;

    }
    console.log(sum);
    if(sum==d)
    {
        possSquares++;
    }

});

console.log(possSquares);